n = int(input())
a = list(map(int , input().split()))

b = sorted(a)

midIndex = 0

if(n%2 != 0):
    midIndex = int(n/2)+1;
else:
    midIndex = int(n/2)

print(b[midIndex - 1])    
