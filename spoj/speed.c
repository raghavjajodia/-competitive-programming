#include<stdio.h>
#include<math.h>
int po(int a)
{
    int count=0;
    while(a%2==0)
       {count++;
    a=a/2;}
    return count;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        num=po(2*abs(a));
        den=po(abs(a+b));
        if(num>den)
        printf("%d\n",abs(a+b)/);
        else
            printf("%d\n",);
    }
return 0;}
