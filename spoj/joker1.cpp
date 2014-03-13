#include<stdio.h>
#include<algorithm>

int main()
{
    int t,n,i;
    int a[68];
    long long ans;
    scanf("%d",&t);
    while(t--)
    {   ans=1;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        std::sort(a,a+n);
        for(i=0;i<n;i++)
            ans=((a[i]-i)*ans)%1000000007;
        printf("%lld\n",ans%1000000007);

    }

    printf("KILL BATMAN\n");

return 0;}
