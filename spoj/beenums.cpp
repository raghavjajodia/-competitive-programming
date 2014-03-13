#include<stdio.h>
#include<math.h>
int main()
{   float f;
    long long n;
    scanf("%lld",&n);
    while(n!=-1)
    {
        f=(1+sqrt(1+4*(n-1)/3))/2;
        if(!(f-(int)f) && f>=1.0)
            printf("Y\n");
        else
            printf("N\n");
        scanf("%lld",&n);

    }
    return 0;
}
