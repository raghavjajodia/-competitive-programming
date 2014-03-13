#include<stdio.h>
#include<algorithm>
bool compare (unsigned long long i, unsigned long long j){
     return i<j;
     }
int main()
{
    unsigned long long n,ans,i=0,c[100000],p[100000];
    scanf("%llu",&n);
    while(n)
    {   ans=0;

        for(i=0;i<n;i++)
            scanf("%llu",&c[i]);
        for(i=0;i<n;i++)
            scanf("%llu",&p[i]);
        std::sort(c, c+n, compare);
        std::sort(p, p+n, compare);

        for(i=0;i<n;i++)
            ans+=c[i]*p[n-1-i];
        printf("%llu\n",ans);
        scanf("%llu",&n);

    }
    return 0;
}
