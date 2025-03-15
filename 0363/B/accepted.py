#value : k = int(input())
#mult values : n, p = map(int, input().split())
#list : a = list(map(int, input().split()))

n, k = map(int, input().split())

L = list(map(int, input().split()))

for i in range(1, n):
    L[i] += L[i - 1]

l, r = 0, k
mini = 1
mini_val = L[k - 1]

while r < n:
    val = L[r] - L[l]

    if val < mini_val:
        mini_val = val
        mini = l + 2
    
    l += 1
    r += 1

print(mini)