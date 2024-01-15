n = int(input())
a = list(map(int,input().split()))
b = a[::-1]
c = []
aLen = len(a)
for i in b:
    if i not in c:
        c.append(i)
d = c[::-1]
print(len(d))
print(*d, sep = ' ') 