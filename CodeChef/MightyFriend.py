t = int(input())
while t > 0:
    l = list(map(int, input().split()))
    n, k = l
    a = list(map(int, input().split()))
    b = sorted(a)
    j = 0
    for i in range(0, k):
        index = a.index(b[j])
        if index % 2 == 0:
            if a[index + 1] > a[index - 1]:
                temp = a[index - 1]
                a[index - 1] = a[index]
                a[index] = temp
            else:
                temp = a[index - 1]
                a[index - 1] = a[index]
                a[index] = temp
        j += 1  # Increment j instead of i
    print(a)
    

        i = 0
        even = 0
        odd = 0
        while(i<n):
            even += a[i]
            i+=2
        i = 1    
        while(i<n):
            odd += a[i]
            i+=2
        
        
        if(odd < even):
            print("YES")
            break
        else:
            print("NO")
            break
        
    t-=1