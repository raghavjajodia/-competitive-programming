#include<stdio.h>

long long binary(long long n)
{
    long long ans=0;
    int i=1;
    while(n)
    {
        ans=(((n%2)*i)%1000000007+ans)%1000000007;
        i=(i*10)%1000000007;
        n=n/2;
    }
    return ans;
}

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
       // printf("%lld\n",binary(n));
        long long bin=0;
        bin=binary(n);
        long long ans=0;
        ans=pow(2,(bin*2)%1000000007);
        printf("%lld\n",ans);
    }

    return 0;
}
