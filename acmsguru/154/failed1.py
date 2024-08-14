n = int(input())
r = 0
i = 0
while r < n:
    i += 5
    k = i
    while k % 5 == 0:
        k //= 5
        r += 1
if r != n or n == 0:
    print("No solution")
else:
    print(i)
