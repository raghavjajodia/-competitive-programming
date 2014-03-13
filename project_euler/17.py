
summ=0
for num in range(1,1000):
    if num/100==0: summ+=0        
    elif num/100==1:summ+=13
    elif  num/100==2:summ+=13
    elif num/100==3:summ+=15
    elif num/100==4:summ+=14
    elif num/100==5:summ+=14
    elif num/100==6:summ+=13
    elif num/100==7:summ+=15
    elif num/100==8:summ+=15
    elif num/100==9:summ+=14


    if (num/10)%10==2:summ+=6
    elif (num/10)%10==3:summ+=6
    elif (num/10)%10==4:summ+=6
    elif (num/10)%10==5:summ+=6
    elif (num/10)%10==6:summ+=6
    elif (num/10)%10==7:summ+=7
    elif (num/10)%10==8:summ+=6
    elif (num/10)%10==9:summ+=6



    if num%100==10:
        summ+=3
        continue
    elif num%100==11:
        summ+=6
        continue
    elif num%100==12:
        summ+=6
        continue
    elif num%100==13:
        summ+=8
        continue
    elif num%100==14:
        summ+=8
        continue
    elif num%100==15:
        summ+=7
        continue
    elif num%100==16:
        summ+=7
        continue
    elif num%100==17:
        summ+=9
        continue
    elif num%100==18:
        summ+=8
        continue
    elif num%100==19:
        summ+=8
        continue



    if num%10==1:summ+=3
    elif num%10==2:summ+=3
    elif num%10==3:summ+=5
    elif num%10==4:summ+=4
    elif num%10==5:summ+=4
    elif num%10==6:summ+=3
    elif num%10==7:summ+=5
    elif num%10==8:summ+=5
    elif num%10==9:summ+=4
print summ+11
