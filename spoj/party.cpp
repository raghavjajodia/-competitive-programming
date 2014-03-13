#include<stdio.h>
#include<math.h>
int am[105],fun[105];
float av[105];

void sort(int num)
{
    int i,j,temp;
    float temp1;
    for(i=0;i<num;i++)
        for(j=0;j<num-i-1;j++)
    {
        if (av[j]>av[j+1])
        {
            temp1=av[j];
            av[j]=av[j+1];
            av[j+1]=temp1;
            temp=am[j];
            am[j]=am[j+1];
            am[j+1]=temp;
            temp=fun[j];
            fun[j]=fun[j+1];
            fun[j+1]=temp;

        }
    }
}
int main()
{   int i,amt,num,money,f,j,tempa,tempb;
    scanf("%d %d",&amt,&num);
    while(amt!=0 && num!=0)
    {
        for(i=0;i<num;i++)
        {
           scanf("%d %d",&tempa,&tempb);
           if(!tempb)
           {
               num=num-1;
               i=i-1;
               continue;
           }
           am[i]=tempa;
           fun[i]=tempb;
            av[i]=((float)am[i])/fun[i];
        }

    sort(num);

    i=0;
    money=0;
    f=0;
    while(money<=amt && i<=num)
        {money+=am[i];
        f+=fun[i];
        i++;
        }
    money=money-am[--i];
    f=f-fun[i];
    for(j=i+1;j<num;j++)
    {
        if(amt-money<5)
        break;
        else

            if(money+am[j]<=amt)
            {
                money+=am[j];
                f+=fun[j];            }

    }
    printf("%d %d\n\n",money,f);
    scanf("%d %d",&amt,&num);
    }
    return 0;
}
