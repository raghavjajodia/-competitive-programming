#include<stdio.h>
#include<vector>
using namespace std;
int CeilIndex(vector<long long>a, int l, int r, long long key) {
    int m;

    while( r - l > 1 ) {
        m = l + (r - l)/2;
        (a[m] >= key ? r : l) = m; // ternary expression returns an l-value
    }

    return r;
}
int main()
{
    int n,len;
    scanf("%d",&n);
    vector<long long>a(n);
    vector<long long>tail(n);
    scanf("%lld",&a[0]);
    tail[0]=a[0];
    len=1;
    for(int i=1;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<tail[0])
            tail[0]=a[i];
        else if(a[i]>tail[len-1])
            tail[len++]=a[i];
        else
            tail[CeilIndex(tail,-1,len-1,a[i])]=a[i];
    }
    printf("%d",len);


return 0;
}
