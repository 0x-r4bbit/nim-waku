import
  std/strutils,
  confutils, chronos, json_rpc/rpcserver, metrics, metrics/chronicles_support,
  eth/[keys, p2p, async_utils], eth/common/utils,
  eth/p2p/[discovery, enode, peer_pool, bootnodes, whispernodes],
  eth/p2p/rlpx_protocols/whisper_protocol,
  ../../protocol/v1/[waku_protocol, waku_bridge],
  ./rpc/[waku, wakusim, key_storage], ./waku_helpers, ./config

const clientId = "Nimbus waku node"

proc run(config: WakuNodeConf, rng: ref BrHmacDrbgContext) =
  let
    (ip, tcpPort, udpPort) = setupNat(config.nat, clientId, config.tcpPort,
      config.udpPort, config.portsShift)
    address = Address(ip: ip, tcpPort: tcpPort, udpPort: udpPort)

  # Set-up node
  var node = newEthereumNode(config.nodekey, address, 1, nil, clientId,
    addAllCapabilities = false, rng = rng)
  if not config.bootnodeOnly:
    node.addCapability Waku # Always enable Waku protocol
    var topicInterest: Option[seq[waku_protocol.Topic]]
    var bloom: Option[Bloom]
    if config.wakuTopicInterest:
      var topics: seq[waku_protocol.Topic]
      topicInterest = some(topics)
    else:
      bloom = some(fullBloom())
    let wakuConfig = WakuConfig(powRequirement: config.wakuPow,
                                bloom: bloom,
                                isLightNode: config.lightNode,
                                maxMsgSize: waku_protocol.defaultMaxMsgSize,
                                topics: topicInterest)
    node.configureWaku(wakuConfig)
    if config.whisper or config.whisperBridge:
      node.addCapability Whisper
      node.protocolState(Whisper).config.powRequirement = 0.002
    if config.whisperBridge:
      node.shareMessageQueue()

  # TODO: Status fleet bootnodes are discv5? That will not work.
  let bootnodes = if config.bootnodes.len > 0: setBootNodes(config.bootnodes)
                  elif config.fleet == prod: setBootNodes(StatusBootNodes)
                  elif config.fleet == staging: setBootNodes(StatusBootNodesStaging)
                  elif config.fleet == test : setBootNodes(StatusBootNodesTest)
                  else: @[]

  traceAsyncErrors node.connectToNetwork(bootnodes, not config.noListen,
    config.discovery)

  if not config.bootnodeOnly:
    # Optionally direct connect with a set of nodes
    if config.staticnodes.len > 0: connectToNodes(node, config.staticnodes)
    elif config.fleet == prod: connectToNodes(node, WhisperNodes)
    elif config.fleet == staging: connectToNodes(node, WhisperNodesStaging)
    elif config.fleet == test: connectToNodes(node, WhisperNodesTest)

  if config.rpc:
    let ta = initTAddress(config.rpcAddress,
      Port(config.rpcPort + config.portsShift))
    var rpcServer = newRpcHttpServer([ta])
    let keys = newKeyStorage()
    setupWakuRPC(node, keys, rpcServer, rng)
    setupWakuSimRPC(node, rpcServer)
    rpcServer.start()


  if config.logAccounting:
    proc logPeerAccounting(udata: pointer) {.closure, gcsafe.} =
      {.gcsafe.}:
        for peer in node.peerPool.peers:
          let
            sent = peer.state(Waku).accounting.sent
            received = peer.state(Waku).accounting.received
            id = peer.network.toEnode
          info "Peer accounting", id, sent, received
          peer.state(Waku).accounting = Accounting(sent: 0, received: 0)

      discard setTimer(Moment.fromNow(2.seconds), logPeerAccounting)
    discard setTimer(Moment.fromNow(2.seconds), logPeerAccounting)

  when defined(insecure):
    if config.metricsServer:
      let
        address = config.metricsServerAddress
        port = config.metricsServerPort + config.portsShift
      info "Starting metrics HTTP server", address, port
      metrics.startHttpServer($address, Port(port))

  if config.logMetrics:
    proc logMetrics(udata: pointer) {.closure, gcsafe.} =
      {.gcsafe.}:
        let
          connectedPeers = connected_peers
          validEnvelopes = waku_protocol.envelopes_valid
          droppedEnvelopes = waku_protocol.envelopes_dropped

      info "Node metrics", connectedPeers, validEnvelopes, droppedEnvelopes
      discard setTimer(Moment.fromNow(2.seconds), logMetrics)
    discard setTimer(Moment.fromNow(2.seconds), logMetrics)

  runForever()

when isMainModule:
  let
    rng = keys.newRng()
    conf = WakuNodeConf.load()

  if conf.logLevel != LogLevel.NONE:
    setLogLevel(conf.logLevel)

  case conf.cmd
  of genNodekey:
    echo PrivateKey.random(rng[])
  of noCommand:
    run(conf, rng)
