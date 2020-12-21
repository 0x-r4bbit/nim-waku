# bug #3799

import strutils

const output = splitLines("""
00000000000000000000000000000000000000000
00000000000001111111111111110000000000000
00000000001111111111111111111110000000000
00000000111111111111111111111111100000000
00000011111222222221111111111111111000000
00000111122222222222221111111111111100000
00001112222333333459432111111111111110000
00011122355544344463533221111111111111000
00111124676667556896443322211111111111100
00111126545561919686543322221111111111100
01111123333346967807554322222211111111110
01111122233334455582015332222221111111110
01111122222333344567275432222222111111110
01111112222222334456075443222222211111110
01111111222222233459965444332222221111110
01111111122222223457486554433322222111110
01111111112222222367899655543333322111110
01111111111122222344573948465444332111110
00111111111112222334467987727667762111100
00111111111111122233474655557836432111100
00011111111111112233 454433334 4321111000
00001111111111111122354333322222211110000
00000111111111111111222222222222111100000
00000001111111111111111122222111110000000
00000000111111111111111111111111100000000
00000000000111111111111111111100000000000
00000000000000111111111111100000000000000
""")

const nmax = 500

type
  Complex*[T] = object
    re*: T
    im*: T

converter toComplex*[T](x: tuple[re, im: T]): Complex[T] =
  result.re = x.re
  result.im = x.im


proc julia*[T](z0, c: Complex[T], er2: T, nmax: int): int =
  result = 0
  var z = z0
  var sre = z0.re * z0.re
  var sim = z0.im * z0.im
  while (result < nmax) and (sre + sim < er2):
    z.im = z.re * z.im
    z.im = z.im + z.im
    z.im = z.im + c.im
    z.re = sre - sim + c.re
    sre = z.re * z.re
    sim = z.im * z.im
    inc result

template dendriteFractal*[T](z0: Complex[T], er2: T, nmax: int): int =
  julia(z0, (T(0.0), T(1.0)), er2, nmax)

iterator stepIt[T](start, step: T, iterations: int): (int, T) =
  for i in 0 .. iterations:
    yield (i, start + T(i) * step)

var errors = 0

let c = (0.36237, 0.32)
for j, y in stepIt(2.0, -0.0375 * 4, 107 div 4):
  var row = ""
  for i, x in stepIt(-2.0, 0.025 * 4, 160 div 4):
    #let n = julia((x, y), c, 4.0, nmax)         ### this works
    let n = dendriteFractal((x, y), 4.0, nmax)
    let c = char(int('0') + n mod 10)
    let e = output[j][i]  # expected
    if c != e:
      errors += 1
    row.add(c)

  # Printing apparently makes the test fail when joined.
  # echo row

doAssert errors < 10, "total errors: " & $errors
