#value : k = int(input())
#mult values : n, p = map(int, input().split())
#list : a = list(map(int, input().split()))

f = open("input.txt", 'r')

ind = 0
for i in f:
    if ind == 0:
        n = int(i)
        ind += 1
    else:
        s = str(i)
        break;
L = []
h = n//2
for i in range(h):
    if (s[i] == 'R' and s[h + i] == 'L'):
        L.append((h + i, i))
    else:
        L.append((i, h + i))

res = open("output.txt", 'w')
for i in L:
    res.write(str(i[0] + 1))
    res.write(" ")
    res.write(str(i[1] + 1))
    res.write("\n")
    