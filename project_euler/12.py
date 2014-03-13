import math

count=0
i=3
while count<500:
    num=i*(i+1)/2
    r=int(math.sqrt(num))
    if r**2==num:
        count=3
        limit=r
    else:
        count=2
        limit=r+1
    for j in range(2,limit):
        if num%j==0:
            count+=2
    i+=1

print num

    
