num1, num2 = map(int, input().split())
arr =[]
arr.append(0)
result = 0

for i in range(1000):
    for j in range(i):
        arr.append(i)
        #arr[0, 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, ....999, 999, 999, ..., 999]

for i in range(num1, num2+1):
    #if num1 = 3 / num 2 = 7 -> range(3, 8) -> 3, 4, 5, 6, 7
    print("arr[%d] : " %i, arr[i])
    result = arr[i] + result

print(result)





