n = int(input())
winnerScore = 0

for i in range(n):
    scoreList = list(map(int, input().split()))
    runScoreList = scoreList[:2]
    trickScoreList = scoreList[2:]
    runScoreList.sort(reverse=True)
    trickScoreList.sort(reverse=True)
    winnerScore = max(winnerScore, (runScoreList[0] + trickScoreList[0] + trickScoreList[1]))

print(winnerScore)


