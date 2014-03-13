sum=0
prev=1
i=2
while i<=4000000:
    i=i+prev
    prev=i-prev
    if i%2==0:
        sum=sum+i
print sum
