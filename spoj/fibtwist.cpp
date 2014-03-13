#include<stdio.h>
#include<vector>
using namespace std;
typedef vector<vector<long long> > matrix;

matrix mul(matrix a,matrix b,int k,long long M)
{
    matrix c(k,vector<long long>(k));
    int i,j,n;
    for(i=0;i<k;i++)
        for(j=0;j<k;j++)
        for(n=0;n<k;n++)
        c[i][j]=(c[i][j]+(a[i][n]*b[n][j])%M)%M;
    return c;
}

matrix pow(matrix a,long long n,int k,long long M)
{
    if(n==1)
        return a;
    else if(n%2==1)
        return(mul(a,pow(a,n-1,k,M),k,M));
    else
    {
        matrix temp;
        temp=pow(a,n/2,k,M);
        return(mul(temp,temp,k,M));
    }
}


int main()
{
    int t,k,i,j;
    long long n=0;
    scanf("%d",&t);
    while(t--)
    {   long long M=0;
        long long ans;
        k=2;
         matrix t(k+2,vector<long long>(k+2));
         matrix mat(k+2,vector<long long>(k+2));
    vector<long long> f1 (k+2);

        t[0][0]=1;
        t[0][1]=1;
        t[0][2]=1;
        t[0][3]=-1;
        t[1][0]=1;
        t[2][2]=1;
        t[2][3]=1;
        t[3][3]=1;
        f1[0]=1;
        f1[1]=0;
        f1[2]=2;
        f1[3]=1;
        scanf("%lld %lld",&n,&M);
        if(n==0)
            ans=0;
        else if(n==1)
            ans=1;
        else{

        mat=pow(t,n-1,k+2,M);

        ans=0;
        for(i=0;i<4;i++)
        {
            ans=(ans+(mat[0][i]*f1[i])%M)%M;
        }

        }
        printf("%lld\n",ans);

    }



return 0;}
