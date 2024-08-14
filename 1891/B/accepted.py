#value : k = int(input())
#mult values : n, p = map(int, input().split())
#list : a = list(map(int, input().split()))


def bin_search(L, x):
    n = len(L)
    l, r = 0, n - 1
    m = 0
    while l < r:
        m = (l + r) // 2
        if L[m][2] == x:
            break
        if L[m][2] > x:
            r = m - 1
        else:
            l = m + 1
    while(m > 0 and L[m][2] >= x):
        m -= 1
    while(m < n and L[m][2] < x):
        m += 1
    return m

def maxpow2(x):
    n = 0
    while x > 0 and x%2 == 0:   
        n+=1
        x//=2
    return n

for _ in range(int(input())):	#while(t--)
    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    x = list(map(int, input().split()))
    newx = []
    maxi = 40
    for i in x:
        if i < maxi:
            newx.append(i)
            maxi = i
    x = newx
    newa = []
    for i in range(n):
        newa.append((a[i], i, maxpow2(a[i])))
    newa = sorted(newa, key = lambda x: x[2])
    maxi = 40
    for puiss in x:
        if puiss <= maxi:
            ind = bin_search(newa, puiss)
            if ind < n:
                toadd = 2**(puiss-1)
                maxi = puiss-1
                for i in range(ind, n):
                    act = newa[i]
                    newa[i] = (act[0] + toadd, act[1], puiss-1)
    res = [0]*n
    for i in newa:
        res[i[1]] = i[0]
    for i in res:
        print(i, end=" ")
    print()




