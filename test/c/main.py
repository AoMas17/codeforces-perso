#value : k = int(input())
#mult values : n, p = map(int, input().split())
#list : a = list(map(int, input().split()))

#for _ in range(int(input())):	#while(t--)

n, p = map(int, input().split())

def get_luck(x):

    L = []

    if x > 10**9:
        return L
    
    q = x * 10 + 4
    s = x * 10 + 7

    L.append(q)
    L.append(s)

    L += get_luck(q)
    L += get_luck(s)

    return L

def solve():
    L = get_luck(0)
    L.sort()
    print(L)

solve()
