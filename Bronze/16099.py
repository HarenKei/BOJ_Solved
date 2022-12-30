t = int(input())

for i in range(t):
    lt, wt, le, we = map(int, input().split())

    
    if((lt * wt) > (le * we)):
        print("TelecomParisTech")
    elif((le * we) > (lt * wt)):
        print("Eurecom")
    elif((le * we) == (lt * wt)):
        print("Tie")
