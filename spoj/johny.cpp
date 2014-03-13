#include<stdio.h>
#include<algorithm>
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
using namespace std;

int binary(int array[102],int lower,int bound,int key)
{
    int mid=(lower+bound)/2;
    if(array[mid]==key)
        return mid+1;
    else if(key>array[mid])
        lower=mid;
    else
        bound=mid;
    binary(array,lower,bound,key);

}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    int n,k,key;
    int arr[102];
    scanint(n);
    for(int i=0;i<n;i++)
    scanint(arr[i]);
    scanint(k);
//    printf("%d\n",n);
//    printf("%d\n",k);
//    for(int i=0;i<n;i++)
//        printf("%d ",arr[i]);
//    printf("\n");
    key=arr[k-1];
    sort(arr,arr+n);
//    for(int i=0;i<n;i++)
//        printf("%d ",arr[i]);
//    printf("\n");
    int ans=binary(arr,0,n,key);
    printf("%d\n",ans);
}
return 0;
}


