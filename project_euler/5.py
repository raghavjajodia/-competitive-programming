product=1
while product>0:
    print product
    product+=1
    for i in range(1,6):
        if product%i!=0:break
    break
print product
