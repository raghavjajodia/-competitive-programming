#include<stdio.h>
int main()
{
int y;
char ans='B';
long long pos=0;
long long current=0;
long long left=0,right=1;
scanf("%d",&y);
scanf("%lld",&pos);
for(int i=0;i<y;i++)
    right=right*2;
right=right-1;
//printf("%lld %lld %lld\n",left,right,pos);
if(right==pos)
    printf("red\n");
else{
current=(left+right)/2;
while(current!=pos)
{
    if(current<pos)
        left=current;
    else
        {right=current;
        if(ans=='R')
            ans='B';
        else
            ans='R';
        }

    current=(left+right)/2;
 //   printf("%lld %c\n",current,ans);
}
if(ans=='R')
    printf("red\n");
else
printf("blue\n");
}
return 0;}
