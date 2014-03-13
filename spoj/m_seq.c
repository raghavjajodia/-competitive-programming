#include<stdio.h>
#include<math.h>
int main()
{
unsigned long long n,t;
scanf("%llu",&t);
while(t--)
{
    scanf("%llu",&n);
     printf("%.8lf\n",sqrt(4*n*(n+1)+1)/n);
}
return 0;}
