
#include<stdio.h>
int main()
{int t,i;
scanf("%d",&t);
for (i=0;i<t;i++)
{long long num=0;
scanf("%Ld",&num);
int count=0;
while(num>0)
{count+=num/5;
num/=5;
}
printf("%d\n",count);
}
return 0;
}
