#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,count;
    scanf("%d",&a);
    while(a)
    {   i=1;
    count=0;

        while(2*i-1<a)
        {
            count++;
            i=2*i;
        }
        printf("%d\n",count);
        scanf("%d",&a);
    }
    return 0;
}
