maxi=0
for i in range(1000000,1,-1):
    count=0
    num=i
    while num>1:
        if num%2==0:
            num=num/2
        else :num=3*num+1
        count+=1
    if maxi<count:
        maxi=count
        ans=i
print ans
