#include<stdio.h>
int main()
{double a;
scanf("%lf",&a);
while(a!=0)
{printf("%0.2lf\n",(a*a)/(2*3.141592653589793238462643383279));
scanf("%lf",&a);
}
return 0;
}
