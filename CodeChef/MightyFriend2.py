t = int(input())
while t > 0:
    l = list(map(int, input().split()))
    n, k = l
    a = list(map(int, input().split()))
    b = sorted(a, reverse=True)

    for i in range(0, k):
        highest = a.index(b[i])
        if highest % 2 == 0:
            if a[highest + 1] > a[highest - 1]:
                temp = a[highest - 1]
                a[highest - 1] = a[highest]
                a[highest] = temp
            else:
                temp = a[highest + 1]
                a[highest + 1] = a[highest]
                a[highest] = temp

    i = 0
    even = 0
    odd = 0
    while i < n:
        even += a[i]
        i += 2
    i = 1
    while i < n:
        odd += a[i]
        i += 2

    if odd > even:
        print("YES")
    else:
        print("NO")

    t -= 1
