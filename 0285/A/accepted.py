#value : k = int(input())
#mult values : n, p = map(int, input().split())
#list : a = list(map(int, input().split()))

n, k = map(int, input().split())

L = []

for i in range(n - k - 1):
    L.append(i + 1)

for i in range(k + 1):
    L.append(n - i)

for i in L:
    print(i, end=" ")
print()