#include<stdio.h>
#include<vector>
using namespace std;
typedef vector<vector<long long> > matrix;

matrix mul(matrix a,matrix b,int k,long long MOD)
{
    matrix c(k,vector<long long>(k));
    int i,j,n;
    for(i=0;i<k;i++)
        for(j=0;j<k;j++)
        for(n=0;n<k;n++)
        c[i][j]=(c[i][j]+(a[i][n]*b[n][j])%MOD)%MOD;
    return c;
}

matrix pow(matrix a,long long n,int k,long long MOD)
{
    if(n==1)
        return a;
    else if(n%2==1)
        return(mul(a,pow(a,n-1,k,MOD),k,MOD));
    else
    {
        matrix temp;
        temp=pow(a,n/2,k,MOD);
        return(mul(temp,temp,k,MOD));
    }
}

long long sum(long long n,matrix trans,vector<long long> base,long long k,long long MOD)
{   int i;
long long ans=0;
    matrix mat(k+1,vector<long long>(k+1));
    if(n<=k)
    {
        for(i=1;i<=n;i++)
            ans+=base[k-i+1];

    }
    else
    {
    mat=pow(trans,n-k,k+1,MOD);
//    for(int i=0;i<=k;i++)
//       {for(int j=0;j<=k;j++)
//        printf("%lld ",mat[i][j]);
//        printf("\n");}

        for(i=0;i<=k;i++)
        {
            ans=(ans+((mat[0][i])*(base[i]))%MOD)%MOD;
        }
    }
    return ans;

}
int main()
{
    int t,k,i,j;

    scanf("%d",&t);
    while(t--)
    {   long long temp=0,m=0,n=0,MOD=0;

        scanf("%d",&k);
         matrix t(k+1,vector<long long>(k+1));

    vector<long long> f1 (k+1);
        for(i=2;i<=k;i++)
            t[i][i-1]=1;
        f1[0]=0;
        for(i=k;i>0;i--)
            {scanf("%lld",&f1[i]);
            f1[0]+=f1[i];}
        for(i=1;i<=k;i++)
            {scanf("%lld",&temp);
            t[0][i]=temp;
            t[1][i]=temp;}
        t[0][0]=1;


        scanf("%lld %lld %lld",&m,&n,&MOD);

        printf("%lld\n",sum(n,t,f1,k,MOD)-sum(m-1,t,f1,k,MOD));

    }

return 0;}
