#include<stdio.h>

long long pow(long long a,long long n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return a;
    else if(n%2==0)
    {
        long long temp=0;
        temp=pow(a,n/2);
        return (temp*temp)%1000000007;
    }
    else
        return((a*pow(a,n-1))%1000000007);
}

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    long long n;
    scanf("%lld",&n);
    long long ans=0;
    ans=pow(2,n)-1;
    printf("%lld\n",ans);
}
return 0;
}
