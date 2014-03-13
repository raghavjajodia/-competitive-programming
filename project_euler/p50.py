import math

def isprime(num):
    if (num%2==0):
        return False
    else:
        for i in range(3,int(math.sqrt(num))+1,2):
            if (num%i==0):
                return False
    return True
lis=[2]        
for i in range(3,200000,2):
    if (isprime(i)):
        lis=lis+[i,]

summ=0
for j in lis:
    if isprime(summ+j) and (summ+j)>1000000 :
        break
    summ=summ+j
print summ-j
        
    
