num = int(input())
numList = list(map(int, str(num)))
numList.sort(reverse=True)

print(*numList, sep='')
