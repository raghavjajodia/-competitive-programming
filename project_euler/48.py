sum=0
for i in range (1,1001):
    sum+=i**i
for j in range(1,11):
    print sum%10
    sum=sum/10
