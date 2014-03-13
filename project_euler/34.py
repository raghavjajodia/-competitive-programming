def factorial(n):
    product=1
    for i in range(1,n+1):
        product=product*i
    return(product)

summ=0
for i in range(10,1000000):
    modu=0
    for a in str(i):
        modu+=factorial(int(a))
    if modu==i:
        summ+=i
print summ
