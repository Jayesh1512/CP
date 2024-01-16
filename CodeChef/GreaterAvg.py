t = int(input())
while (t>0):
    l1 = list(map(int,input().split()))
    a,b,c = l1
    avg = (a+b)/2
    if(c<avg):
        print("YES")    
    else:
        print("NO")
    t-=1    