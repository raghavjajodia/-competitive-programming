#include<stdio.h>
int rev(int num)
{int rev;
rev=0;
while (num>0)
{rev=rev*10+num%10;
num=num/10;
}
return(rev);
}
int main()
{
int  i,t,a,b;

scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d %d",&a,&b);
printf("%d\n",rev(rev(a)+rev(b)));
}
return(0);
}




