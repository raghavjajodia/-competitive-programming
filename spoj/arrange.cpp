#include<stdio.h>
#include<algorithm>
#include<functional>

using namespace std;






int main()
{
int t,n;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+n,greater<int>());
    int j=n-1;
    while(arr[j]==1)
    {
        printf("1 ");
        j=j-1;
    }
    if(arr[j]==2 && arr[j-1]==3 && j==1)
    {
        arr[j]=3;
        arr[j-1]=2;
    }
    for(int i=0;i<=j;i++)
        printf("%d ",arr[i]);
        printf("\n");
}



return 0;}
