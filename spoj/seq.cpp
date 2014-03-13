#include<stdio.h>
#include<vector>
using namespace std;
typedef vector<vector<long long> > matrix;
const long long MOD=1000000000;


matrix mul(matrix a,matrix b,int k)
{
    matrix c(k,vector<long long>(k));
    int i,j,n;
    for(i=0;i<k;i++)
        for(j=0;j<k;j++)
        for(n=0;n<k;n++)
        c[i][j]=(c[i][j]+(a[i][n]*b[n][j])%MOD)%MOD;
    return c;
}

matrix pow(matrix a,long long n,int k)
{
    if(n==1)
        return a;
    else if(n%2==1)
        return(mul(a,pow(a,n-1,k),k));
    else
    {
        matrix temp;
        temp=pow(a,n/2,k);
        return(mul(temp,temp,k));
    }
}


int main()
{
    int t,k,i,j;
    long long n=0;
    scanf("%d",&t);
    while(t--)
    {
        long long ans;
        scanf("%d",&k);
         matrix t(k,vector<long long>(k));
         matrix mat(k,vector<long long>(k));
    vector<long long> f1 (k);
        for(i=0;i<k-1;i++)
            t[i][i+1]=1;
        for(i=0;i<k;i++)
            scanf("%lld",&f1[i]);
        for(i=0;i<k;i++)
            scanf("%lld",&t[k-1][k-i-1]);
        scanf("%lld",&n);




        mat=pow(t,n-1,k);

        ans=0;
        for(i=0;i<k;i++)
        {
            ans=(ans+(mat[0][i]*f1[i])%MOD)%MOD;
        }
        printf("%lld\n",ans);

    }



return 0;}
