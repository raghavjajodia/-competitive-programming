#include<stdio.h>
#include<math.h>
int main()
{
    double r,b,a;
    scanf("%lf %lf",&r,&b);
    a=sqrt((r/2+2)*(r/2+2)-4*(r+b));
    printf("%.0lf %.0lf",(r/2+2+a)/2,(r/2+2-a)/2);
    return 0;
}
