n = int(input())
a = input()
if n>26:
    print(-1)
else:    
    s1 = set(a)
    lens1 = len(s1)
    lena = len(a)
    print(lena - lens1)