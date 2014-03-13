#include<stdio.h>
int main()
{
    int t,n,count,i;
    scanf("%d",&t);
    while(t--)
    {   count=0;
        scanf("%d",&n);
        for(i=1;i<n;i=2*i)
            count++;
        printf("%d\n",count+1);
    }
return 0;}
