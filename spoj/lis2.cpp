#include<stdio.h>
#include<vector>
using namespace std;
#define lessthan(a,b,c,d) a<c && b<d
int CeilIndex(vector<long long>a,vector<long long>b, int l, int r, long long key1,long long key2) {
    int m;

    while( r - l > 1 ) {
        m = l + (r - l)/2;
        if(lessthan(key1,key2,a[m],b[m])||( key1==a[m] && key2==b[m]))
            r=m;
        else
            l=m;
    }

    return r;
}
int main()
{
    int n,len;
    scanf("%d",&n);
    vector<long long>a1(n);
    vector<long long>a2(n);

    vector<long long>tail1(n);
    vector<long long>tail2(n);
    scanf("%lld %lld",&a1[0],&a2[0]);
    tail1[0]=a1[0];
    tail2[0]=a2[0];
    len=1;
    for(int i=1;i<n;i++){
        scanf("%lld %lld",&a1[i],&a2[i]);
        if(lessthan(a1[i],a2[i],tail1[0],tail2[0]))
          { tail1[0]=a1[i];
            tail2[0]=a2[i];}
        else if(lessthan(tail1[len-1],tail2[len-1],a1[i],a2[i]))
          { tail1[len]=a1[i];
            tail2[len]=a2[i];
            len++;}
        else
        {
            int pos=CeilIndex(tail1,tail2,-1,len-1,a1[i],a2[i]);
            tail1[pos]=a1[i];
            tail2[pos]=a2[i];}
    }
    printf("%d",len);


return 0;
}
