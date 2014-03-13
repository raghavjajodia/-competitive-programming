#include<stdio.h>
int main()
{
int a[8],i,max;
for(i=0;i<8;i++)
scanf("%d",&a[i]);
while(a[0]>=0)
{   max=0;

   for(i=0;i<4;i++)
   {
       if(a[i]/a[i+4]>=max)
        if(!(a[i]%a[i+4]))
        max=a[i]/a[i+4];
       else
        max=a[i]/a[i+4]+1;

   }
    for(i=0;i<4;i++)
        printf("%d ",a[i+4]*max-a[i]);
    printf("\n");
    for(i=0;i<8;i++)
    scanf("%d",&a[i]);

}
return 0;
}
