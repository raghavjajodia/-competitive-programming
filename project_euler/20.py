
product=1
for i in range(1,101):
    product=product*i
print product
su=0
while product>1:
    su=su+product%10
    product=product/10
print(su)
