#include<stdio.h>
int main()
{
int n;
int max,max1;
int arr[25],ans[25];
scanf("%d",&n);
max1=0;
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
max=0;
for(int j=0;j<i;j++)
{
if(arr[j]<arr[i])
{
if(ans[j]>max)
max=ans[j];

}

}
ans[i]=max+1;
if(ans[i]>max1)
    max1=ans[i];
}
printf("%d",max1);
return 0;
}
