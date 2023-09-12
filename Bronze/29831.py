s = [
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop"
]

n = int(input())
ans = 1

for i in range(n):
    str = input().rstrip()

    if str not in s:
        ans = 0
    else:
        continue


if ans == 1:
    print("No")
else:
    print("Yes")


