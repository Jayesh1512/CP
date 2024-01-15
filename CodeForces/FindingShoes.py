t = int(input())
while(t>0):
    l1 = list(map(int,input().split()))
    n,m = l1
    
    if(n<=m):
        print(n)
    else:
        print(2*n-m)
    
    t-=1
