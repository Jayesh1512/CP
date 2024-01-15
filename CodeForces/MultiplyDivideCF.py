t = int(input())

def count_operations(n):
    count = 0
    while n % 6 == 0:
        n //= 6
        count += 1
    power_of_two = 0
    while n % 2 == 0:
        if n == 2 :
            power_of_two = 0
        else:    
            n //= 2
            power_of_two += 1
    if n == 1:
        return count + power_of_two
    else:
        return -1 

for i in range(t):
    n = int(input())
    result = count_operations(n)
    print(result)
