#include<stdio.h>



int main()
{
    int i=0,t;
    long long n;
    long long ans;
    scanf("%d",&t);
    scanf("%lld",&ans);
    for(i=1;i<t;i++)
    {
     scanf("%lld",&n);
     ans=ans^n;
    }
    printf("%lld",ans);
    return 0;
}
