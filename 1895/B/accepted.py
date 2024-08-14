#value : k = int(input())
#mult values : n, p = map(int, input().split())
#list : a = list(map(int, input().split()))

for _ in range(int(input())):	#while(t--)
  n = int(input())
  a = list(map(int, input().split()))
  a.sort()
  l = []
  for i in range(n):
    l.append((a[i], a[i+n]))

  distance = 0
  for i in range(1, n):
    distance += abs(l[i][0] - l[i-1][0]) + abs(l[i][1] - l[i-1][1])
  print(distance)
  for i in range (n):
      print(a[i], end=" ")
      print(a[n + i])
