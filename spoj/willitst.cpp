#include<stdio.h>
#include<math.h>
int main()
{double n;
int i;
double temp;
for(i=0;i<45;i++)
{
    n=pow(2,i);
    //scanf("%lf",&n);


    if(n<=1)
    {printf("TAK\n");
    continue;//return 0;
    }

    if(n-floor(n)!=0)
    {
        printf("NIE\n");
        continue;//return 0;
    }

    temp=(log10(n)/log10(2))-floor(log10(n)/log10(2));

        if (temp==0)
        printf("TAK\n");
    else
    printf("NIE\n");
}
    return 0;
}
