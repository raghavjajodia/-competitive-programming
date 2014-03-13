#include<stdio.h>
#include<math.h>
long long gcd(long long a,long long b)
{
    if(b%a==0)
        return a;
    else
        gcd(b%a,a);
}

int main()
{   int i;
    long long n,y,x,ans;
    scanf("%lld",&n);

        scanf("%lld %lld",&x,&y);
        ans=abs(y-x);
        x=y;
        for(i=2;i<n;i++)
        {
            scanf("%lld",&y);
            ans=gcd(ans,abs(x-y));
            x=y;
        }
        printf("%lld\n",ans);


return 0;}
