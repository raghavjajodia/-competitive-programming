#include<stdio.h>
int main()
{
unsigned long long n,t;
scanf("%llu",&t);
while(t--)
{
    scanf("%llu",&n);

  printf("%llu\n",(n/3)*(n/3+1)+((n-2*(n/3))*(n-2*(n/3)-1))/2);
}
return 0;}
