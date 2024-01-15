t = int(input())
while(t>0):
    n = int(input())
    if(n%3 == 0):
        print("NORMAL")
    elif(n%3 ==1):
        print("HUGE")
    else:
        print("SMALL")
        
    t-=1    