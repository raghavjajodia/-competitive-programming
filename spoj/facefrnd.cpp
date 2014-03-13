#include<stdio.h>
#include<algorithm>
int main()
{
    int t,i,j=0,count=1,a,num;
    scanf("%d",&t);
    int arr[100005];
    while(t--)
    {
        scanf("%d %d",&a,&num);
        for(i=0;i<num;i++)
        {
            scanf("%d",&arr[j]);
            j++;
        }
    }

    std::sort(arr,arr+j);
    for(i=0;i<j;i++)
        printf("%d ",arr[i]);
    for(i=0;i<j-1;i++)
    {
        if(arr[i]!=arr[i+1])
            count++;
    }
    printf("%d",count);
    return 0;
}
