import math

def isbouncy(num):
    dec=0
    inc=0
    for i in range(int(math.log(num,10))):
        last=num%10
        num=num/10
        prev=num%10
        if (last<prev):
            dec=dec+1
        elif(last>prev):
            inc=inc+1
    if (not inc==0 and not dec==0):
        return True
    else:
        return False

##
##def dec(num):
##    flag=True
##    for i in range(int(math.log(num,10))):
##        last=num%10
##        num=num/10
##        prev=num%10
##        if (last>prev):
##            flag=False
##            break
##    return flag

count=0
i=1
for i in range(1,int(math.pow(10,100))+1):
    
    if isbouncy(i):
        count=count+1
    
print count
