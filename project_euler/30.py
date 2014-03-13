summ=0
for i in range(10,1000000):
    modu=0
    for a in str(i):
        modu+=int(a)**5
    if modu==i:
        summ+=i
print summ
