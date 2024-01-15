t = int(input())

while t > 0:
    l1 = list(map(int, input().split()))
    a, b, k = l1

    if k % 2 == 0:
        result = (k/2)*(a-b)
    else:
        result = (((k+1)/2)*(a-b))+b

    print((result))
    t -= 1
