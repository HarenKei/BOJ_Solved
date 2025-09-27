n, l = map(int, input().split())
target = 1
labelCount = 0

while True:
  if str(l) not in str(target):
    labelCount += 1
    if labelCount == n:
      print(target)
      break
    target += 1
  else:
    target += 1