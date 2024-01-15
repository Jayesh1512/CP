n = int(input())
s = input()

ans = 0


for i in s:
    if(i == '+'):
        ans +=1
    elif((i == '-') and (ans > 0)):
        ans -=1

print(ans)