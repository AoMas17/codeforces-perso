#value : k = int(input())
#mult values : n, p = map(int, input().split())
#list : a = list(map(int, input().split()))

for _ in range(int(input())):	#while(t--)

    n, m = map(int, input().split())
    x = str(input())
    s = str(input())
    cond = True
    res = 0
    
    while(cond and not s in x):
        res += 1
        x += x
        n += n
        if(n > 32*m):
            cond = False
    if(cond):
        print(res)
    else:
        print(-1)    