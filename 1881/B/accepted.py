#value : k = int(input())
#mult values : n, p = map(int, input().split())
#list : a = list(map(int, input().split()))

for _ in range(int(input())):	#while(t--)
    a, b, c = map(int, input().split())
    if(a != b and b != c and a != c):
        if False:
            print("LOL")
        else:
            L = [a, b, c]
            ma = max(L)
            mi = min(L)
            mid = 0
            if(ma != a and mi != a):
                mid = a
            elif(ma != b and mi != b):
                mid = b
            else:
                mid = c
            
            if(mid == mi * 2 and mi + mid == ma):
                print("YES")
            else:
                print("NO")
    elif(a == b and b == c):
        print("YES")
    else:
        double = 0
        solo = 0
        if c == a:
            double = a
            solo = b
        elif c == b:
            solo = a
            double = c
        elif a == b:
            double = a
            solo = c
        if(double*2 == solo or double * 3 == solo or double * 4 == solo or solo*2 == double):
            print("YES")
        else:
            print("NO")
        