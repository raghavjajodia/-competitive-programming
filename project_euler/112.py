def inc(num):
    a=str(num)
    flag=True
    for i in range(len(a)-1):
        if (a[i]>a[i+1]):
            flag=False
            break
    return flag
def dec(num):
    a=str(num)
    flag=True
    for i in range(len(a)-1):
        if (a[i]<a[i+1]):
            flag=False
            break
    return flag
count=0
i=1
while ((count*100)/i<99):
    i=i+1
    if ((not inc(i)) and (not dec(i))):
        count=count+1
    
print i
