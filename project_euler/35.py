import math
def isprime(num):
    if num==1:
        return False
    if num==2 or num==3:
        return True
    if num%2==0:
        return False
    for j in range(3,round(math.sqrt(num))+1,2):
        if(num%j==0):
            return False
    return True
def rotate(b):
    b.insert(0,b.pop())
    n=0
    for m in b:
        n=n*10+int(m)
    return n

 
count=0

for i in range(111,1000000,2):
    flag=True
    a=list(str(i))
    for k in range(len(a)):
        if (int(a[k])%2==0 or int(a[k])==5):
           flag=False
           break
    if(not flag):
        continue        
    for k in range(len(a)): 
        num=rotate(a)
        if (not(isprime(num))):
            count=count-1
            break
    count=count+1

print count


