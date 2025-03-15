#value : k = int(input())
#mult values : n, p = map(int, input().split())
#list : a = list(map(int, input().split()))


n = int(input())
L = list(map(int, input().split()))

res = L[0]
m = L[0]

for i in L:
    if i > m:
        res += i - m
        m = i

print(res)