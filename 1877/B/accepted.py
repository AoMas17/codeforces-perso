for _ in range(int(input())):
  n, p = map(int, input().split())
  a = list(map(int, input().split()))
  b = list(map(int, input().split()))

  l = []
  for i in range(n):
    l.append([a[i], b[i]])
  l.sort(key = lambda x: x[1])
  
  r = p
  nb = 1
  i = 0
  while nb < n:
    if(l[i][1] < p):
        if(l[i][0] > n - nb):
            r += l[i][1] * (n-nb)
            break
        else:
            r += l[i][0] * l[i][1]
            nb += l[i][0]
            i += 1
    else:
        r += p * (n-nb)
        break
  print(r)
