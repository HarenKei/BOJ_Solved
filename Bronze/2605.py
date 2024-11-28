ans = []
n = int(input())
tmp = list(map(int, input().split()))

for i in range(n):
  ans.insert(tmp[i], str(i+1))

print(' '.join(reversed(ans)))

    