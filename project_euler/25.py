
count=0
prev=1
next=1
ans=2
while count<1000:
    next=prev+next
    count=len(str(next))
    ans+=1    
    prev=next-prev
       

print ans
    
    
