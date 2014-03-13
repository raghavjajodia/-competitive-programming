#include<stdio.h>
int main()
{
    int t,i=1;
    int r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&r);
        printf("Case %d: %lld.25\n",i,(long long)4*r*r);
        i++;
    }
    return 0;
}
