#include<stdio.h>
#include<math.h>

int call(int a)
{
    int count=1;
   int i=2;
while(i<=a)
{
    count++;
    i=2*i;
}
return --count;
}
int main()
{
    int a,b,i,n;
    scanf("%de%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        a=a*10;
    }
    while(a)
    {
    n=call(a);
    printf("%d\n",(int)(2*a+1-pow(2,n+1)));
    scanf("%de%d",&a,&b);
    for(i=1;i<=b;i++)
        a=a*10;

    }
    return 0;
}
