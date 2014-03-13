#include<stdio.h>
int main()
{int n,i,arr[10001];
scanf("%d",&n);
while(n!=-1)

{int temp,j;
long long av,sum;
av=0;
sum=0;
for(i=0;i<n;i++)
{scanf("%d",&arr[i]);
sum=sum+arr[i];
}
if (sum%n==0)
av=sum/n;
else
{
 printf("-1\n");
scanf("%d",&n);
continue;}

for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
{
    if (arr[j]>arr[j+1])
{temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}

}
long long ans;
i=0;
ans=0;
while(arr[i]<av)
{
    ans=ans+av-arr[i];
    i++;
}
printf("%Ld\n",ans);
scanf("%d",&n);
}

return 0;

}
