t = int(input())
while(t>0):
    l = list(map(int,input().split()))
    n,k = l
    a = list(map(int,input().split()))
    print(a)
    
    sorted_a = sorted(a)
    b = sorted_a[::-1]
    print(b)
    

    t-=1