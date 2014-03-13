import math
count=0
for i in range(2000001):
    for j in range(1000000001):
        if math.floor(j**2/i**2)%2!=0:
            count+=1
