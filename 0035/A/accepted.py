#value : k = int(input())
#mult values : n, p = map(int, input().split())
#list : a = list(map(int, input().split()))

#for _ in range(int(input())):	#while(t--)

f = open("input.txt", "r")

L = [0, 0, 0]
ind = 0
for i in f:
    if not ind:
        L[int(i) - 1] = 1
        ind = 1
    else:
        n, p = map(int, i.split())
        L[n-1],L[p-1] = L[p-1],L[n-1]

res = 0
for i in range(3):
    if L[i] == 1:
        res = i+1

r = open("output.txt", "w")
r.write(str(res) + '\n')
