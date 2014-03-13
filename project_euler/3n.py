import math
def isprime(num):
    if num==2:return'y'
    if num%2==0:return 'n'
    for i in range(3,int(math.floor(math.sqrt(num)))+1,2):
        if num%i==0:return 'n'
    return 'y'

for j in range (int(math.sqrt(600851475143)),2,-1):
    if isprime(j)=='y'and 600851475143%j==0:
        print j
        break


    
            
