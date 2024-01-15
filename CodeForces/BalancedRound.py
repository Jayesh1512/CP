t = int(input())

while(t>0):
    l1 = list(map(int,input().split()))
    n,k = l1

    a = list(map(int,input().split()))
    count = 1
    max_count = 0
    b = sorted(a)

    if(len(b) == 1):
        print("0")
    else:
        for i in range((len(b)-1)):
            if(abs(b[i+1] - b[i]) <= k ):
                count+=1          
            else:
                max_count = max(max_count,count)
                count = 1 

        max_count = max(max_count,count)
        ans  = n-max_count
        print(ans)
    t-=1        