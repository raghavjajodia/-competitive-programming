#include<stdio.h>
#include<math.h>
#define g 9.806
#define pi 3.14159265358979323846264338327
int main()
{
    int t,i;
    double a,b,temp;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf",&a,&b);
        temp=(a*g)/(b*b);
        printf("Scenario #%d: ",i);
        if(temp>1)
            printf("-1\n");
        else
            printf("%.2lf\n",(180*asin(temp)/2)/pi);
    }
    return 0;
}
