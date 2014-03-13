#include<stdio.h>
int main()
{   int group=0,i,temp;
    int a[20005];
    for(i=0;i<=20000;i++)
        a[i]=0;
    int q;
    scanf("%d",&q);
    for(i=0;i<q;i++)
     {
    scanf("%d",&temp);
    if(temp==1)
        {
            a[1]=1;
            if(a[2]==0)
        group++;}
    else if (temp==20000)
       {
           a[20000]=1;
        if(a[19999]==0)
        group++;}
    else{
            a[temp]=1;
    if(a[temp-1]==0 && a[temp+1]==0)
        group++;
    else if(a[temp-1]==1 && a[temp+1]==1)
        group--;}
        printf("%d\n",group);
     }
    printf("Justice\n");
return 0;}
