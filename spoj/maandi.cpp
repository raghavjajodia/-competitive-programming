#include<stdio.h>

bool check(long long n)
{
    while(n)
    {
        if(n%10==4 || n%10==7)
            return true;
        n=n/10;
    }
    return false;
}



int main()
{
int t,count;
long long n;
scanf("%d",&t);
while(t--)
{
scanf("%lld",&n);
count=0;
for(int i=1;i*i<=n;i++)
{
if(n%i==0)
{
    if(check(i))
        count++;
    if(check(n/i))
        count++;
}


}
printf("%d\n",count);
}
return 0;}
