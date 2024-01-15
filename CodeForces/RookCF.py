t = int(input())
while t>0:
    a = input()

    count = 0 
    col = a[0]
    row = int(a[1])

    for i in range(8):
        if i + 1 != row:
            print(col + str(i + 1))

    for i in range(ord('a'), ord('i')):
        if chr(i) != col:
            print(chr(i) + str(row))
    t-=1

