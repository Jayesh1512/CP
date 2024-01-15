n = int(input())
a = []

if(n<47):
    print(47)


while n > 0:
    a.append(n % 10)
    n = n // 10

b = []
a.reverse()
for i in range(len(a)):
    if a[i] < 4:
        b.append(4)
    elif a[i] == 4 and a[i + 1] <= 7:
        b.append(4)
    else:
        b.append(7)

b.reverse()


print(b)            