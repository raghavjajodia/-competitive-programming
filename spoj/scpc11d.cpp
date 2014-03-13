#include<stdio.h>

int main()
{long long a,b,c,temp;
scanf("%lld %lld %lld",&a,&b,&c);
while(true)
{
    if(a==0 && b==0 && c==0)
        break;

    if(b<a)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(c<b)
    {
        temp=b;
        b=c;
        c=temp;
    }
    if(c*c==a*a+b*b)
        printf("right\n");
    else
        printf("wrong\n");
    scanf("%lld %lld %lld",&a,&b,&c);
}

return 0;
}
