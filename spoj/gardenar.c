#include<stdio.h>
#include<math.h>
int main()
{   double a,b,c,s;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        s=(a+b+c)/2;
        printf("%.2f\n",0.5*((sqrt(3)/4)*(a*a+b*b+c*c)+3*(sqrt(s*(s-a)*(s-b)*(s-c)))));

    }
    return 0;
}
