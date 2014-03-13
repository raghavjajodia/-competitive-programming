#include<stdio.h>
int main()
{int t,i,j;
long long n,sum,can;
n=0,can=0;
scanf("%d",&t);
for(i=0;i<t;i++)
{sum=0;
printf("\n");
scanf("%Ld",&n);
for(j=0;j<n;j++)
{scanf("%Ld",&can);
sum+=can%n;
}
if (sum%n==0)
printf("YES\n");
else
printf("NO\n");
}

return 0;
}
