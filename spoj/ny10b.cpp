#include<stdio.h>

void tobase(long long y,long long base,int ans[25])
{
    int i=0;
    while(y)
    {
     ans[i]=y%base;
     i++;
     y=y/base;
    }
}

int main()
{
    int t,i,j;

    long long b,x,y,ans,mul;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {   ans=0;
        int b1[25]={0};
        int b2[25]={0};
        int b3[25]={0};
        scanf("%d %lld %lld %lld",&i,&b,&x,&y);
        tobase(x,b,b1);
        tobase(y,b,b2);
        for(i=0;i<25;i++)
            b3[i]=(b1[i]+b2[i])%b;
            mul=1;
        for(i=0;i<25;i++)
        {
            ans+=(b3[i]*mul);
            mul=mul*b;
        }
        printf("%d %lld\n",j,ans);
    }
    return 0;
}
