#include<stdio.h>
int main()
{int na,nd,min1,min2,mina,i,temp;
int arra[15],arrb[15];
scanf("%d %d",&na,&nd);
while(na!=0 && nd!=0)
{   scanf("%d",&mina);
    for(i=1;i<na;i++)
       {scanf("%d",&temp);
       if(temp<mina)
       mina=temp;
       }
       scanf("%d",&min1);
       scanf("%d",&min2);
       if(min2<min1)
       {
           temp=min1;
           min1=min2;
           min2=temp;
       }
    for(i=2;i<nd;i++)
        {scanf("%d",&temp);
        if(temp<min1)
            {min2=min1;
            min1=temp;}
        else if(temp==min1)
        min2=min1;

        else if(temp>min1 && temp<min2)
            min2=temp;
        }
//        printf("%d %d %d\n",mina,min1,min2);

if(mina<min2)
    printf("Y\n");
else
    printf("N\n");
    scanf("%d %d",&na,&nd);
}
return 0;
}
