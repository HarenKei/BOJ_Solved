n = int(input())

word = []

for i in range(n):
    word.append(input())

word = list(set(word))
word.sort(key=lambda x: (len(x), x))

for j in range(len(word)):
    print(word[j])

