#include<stdio.h>
int main()
{   int t,n,i;
    long long a=0,b=0,c=0,d=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        n=2*c/(a+b);
        printf("%d\n",n);
        d=(b-a)/(n-5);
        for(i=1;i<=n;i++)
        {
            printf("%lld ",(a-2*d+(i-1)*d));
        }
        printf("\n");
    }
    return 0;
}
