t = int(input())
while t>0 :
    n = int(input())
    arr = list(map(int, input().split()))
    odd = []
    even = []
    for i in arr:
        if(i%2 == 0):
            odd.append(i)
        else:
            even.append(i)

    oddLen = len(odd)    
    evenLen = len(even)

    small = oddLen if oddLen<evenLen else evenLen

    sum = 0

    for i in range (small+1):
        sum = odd[i] + even[i]
        
    print(sum)

    t -= 1
