#include<stdio.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    while(a!=-1 && b!=-1)
    {

            if(max(a,b)%(min(a,b)+1)==0)
                printf("%d\n",max(a,b)/(min(a,b)+1));
            else
                printf("%d\n",max(a,b)/(min(a,b)+1)+1);
            scanf("%d %d",&a,&b);

    }
}
