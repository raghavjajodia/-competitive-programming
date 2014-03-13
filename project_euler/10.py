import math
def isprime(num):
    if num==2:return'y'
    if num%2==0:return 'n'
    for i in range(3,int(math.floor(math.sqrt(num)))+1,2):
        if num%i==0:return 'n'
    return 'y'

no=5
summ=5
while no<2000000 :
    if isprime(no)=='y':
        summ+=no
    no+=2

print summ


    
            
