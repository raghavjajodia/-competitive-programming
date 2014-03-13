#include<stdio.h>
int main()
{
int arr[31]={0};
arr[0]=1;
arr[2]=3;
arr[4]=11;
for(int i=6;i<=30;i=i+2)
{
    arr[i]=4*arr[i-2]-arr[i-4];
}
int n;
scanf("%d",&n);
while(n!=-1)
{
    printf("%d\n",arr[n]);
    scanf("%d",&n);
}
return 0;
}


