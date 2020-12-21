import
  hashes, tables, sets,
  eth/common/eth_types

type
  AnnounceType* = enum
    None,
    Simple,
    Signed,
    Unspecified

  ReqCostInfo* = object
    msgId*: int
    baseCost*, reqCost*: ReqCostInt

  FlowControlState* = object
    bufValue*, bufLimit*: int
    minRecharge*: int
    lastUpdate*: LesTime

  StatsRunningAverage* = object
    sumX*, sumY*, sumXX*, sumXY*: float64
    count*: int

  LesPeer* = ref object
    isServer*: bool
    isClient*: bool
    announceType*: AnnounceType

    bestDifficulty*: DifficultyInt
    bestBlockHash*: KeccakHash
    bestBlockNumber*: BlockNumber

    hasChainSince*: HashOrNum
    hasStateSince*: HashOrNum
    relaysTransactions*: bool

    # The variables below are used to implement the flow control
    # mechanisms of LES from our point of view as a server.
    # They describe how much load has been generated by this
    # particular peer.
    reqCount*: int             # How many outstanding requests are there?
                               #
    rechargingPower*: int      # Do we give this peer any extra priority
                               # (implemented as a faster recharning rate)
                               # 100 is the default. You can go higher and lower.
                               #
    isRecharging*: bool        # This is true while the peer is not making
                               # any requests
                               #
    reqCostGradient*: int      # Measures the speed of recharging or accumulating
                               # "requests cost" at any given moment.
                               #
    reqCostVal*: int           # The accumulated "requests cost"
                               #
    rechargingEndsAt*: int     # When will recharging end?
                               # (the buffer of the Peer will be fully restored)
                               #
    lastRechargeTime*: LesTime # When did we last update the recharging parameters
                               #
    startReqCostVal*: int      # TODO

    remoteFlowState*: FlowControlState
    remoteReqCosts*: seq[ReqCostInfo]

    # The next variables are used to limit ourselves as a client in order to
    # not violate the control-flow requirements of the remote LES server.

    pendingReqs*: Table[int, ReqCostInt]
    pendingReqsCost*: int

    localFlowState*: FlowControlState
    localReqCosts*: seq[ReqCostInfo]

  LesNetwork* = ref object
    peers*: HashSet[LesPeer]
    messageStats*: seq[StatsRunningAverage]
    ourAnnounceType*: AnnounceType

    # The fields below are relevant when serving data.
    bufferLimit*: int
    minRechargingRate*: int

    reqCostSum*, maxReqCostSum*: ReqCostInt
    reqCount*, maxReqCount*: int
    sumWeigth*: int

    rechargingRate*: int64
    totalRechargedUnits*: int
    totalRechargingPower*: int

    lastUpdate*: LesTime

  KeyValuePair* = object
    key*: string
    value*: Blob

  HandshakeError* = object of CatchableError

  LesTime* = int # this is in milliseconds
  BufValueInt* = int
  ReqCostInt* = int

template hash*(peer: LesPeer): Hash = hash(cast[pointer](peer))

template areWeServingData*(network: LesNetwork): bool =
  network.maxReqCount != 0

template areWeRequestingData*(network: LesNetwork): bool =
  network.ourAnnounceType != AnnounceType.Unspecified

