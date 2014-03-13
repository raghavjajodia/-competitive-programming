import math
def isprime(num):
    if num==2:return'y'
    if num%2==0:return 'n'
    for i in range(3,int(math.floor(math.sqrt(num)))+1,2):
        if num%i==0:return 'n'
    return 'y'

count=1
i=3
while count<10001:
    if isprime(i)=='y':
        count+=1
    i+=2

print i-2
        


    
            
