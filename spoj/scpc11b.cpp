#include<stdio.h>
#include<algorithm>
int main()
{   long long i;
    int a[10000],flag;
    long long n;
    scanf("%lld",&n);
    while(n!=0)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        std::sort(a,a+n);
        flag=1;
        for(i=1;i<=n-1;i++)
        {
            if(a[i]-a[i-1]>200)
                {
                    flag=0;
                    break;
                }
        }
        if(2*(1422-a[n-1])>200)
            flag=0;
        if(flag)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");
            scanf("%lld",&n);

    }
return 0;}
