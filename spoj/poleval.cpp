#include<stdio.h>
#include<math.h>
int main()
{   int test=0;
    int d,i,j,k,l;
    long long sum;
    long long temp[1005];
    int arr[1005];
    int p[105];
    long long res[105];
    scanf("%d",&d);
    while(d!=-1)
    {   test++;
        for(i=d;i>=0;i--)
            scanf("%d",&arr[i]);
        scanf("%d",&k);
        for(i=0;i<k;i++)
        {   scanf("%d",&p[i]);
            temp[0]=1;
            for(l=1;l<=d;l++)
                temp[l]=temp[l-1]*p[i];
            sum=0;
        for(j=0;j<=d;j++)
                sum+=arr[j]*temp[j];
            res[i]=sum;
        }
        printf("Case %d:\n",test);
        for(i=0;i<k;i++)
        printf("%lld\n",res[i]);
        scanf("%d",&d);
    }
    return 0;
}
