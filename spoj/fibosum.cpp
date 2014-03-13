#include<stdio.h>
#include<vector>
using namespace std;
const long long MOD = 1000000007;
typedef vector<vector<long long> > matrix;




matrix mulmat(matrix m1,matrix m2)
{   int i,j,k;
    matrix m3(2,vector<long long>(2));
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        for(k=0;k<2;k++)
        m3[i][j]=(m3[i][j]+(m1[i][k]*m2[k][j])%MOD)%MOD;
    return m3;

}


matrix pow(matrix a,long long n)
{
    matrix c;
    if(n==1)
        return (a);
    if(n%2==0)
    {
        c=pow(a,n/2);
        return(mulmat(c,c));}
    else
        return(mulmat(a,pow(a,n-1)));
}
long long fib(long long n)
{

    int i;
    long long ans2=0;
    matrix t(2,vector<long long>(2));
        matrix one(2,vector<long long>(2));
   //     matrix two(2,vector<long long>(2));
        vector<long long> f1(2);
        f1[0]=1;
        f1[1]=1;

        t[0][0]=0;
        t[0][1]=1;
        t[1][0]=1;
        t[1][1]=1;
        one=pow(t,n-1);
          for(i=0;i<2;i++)
            ans2=(ans2+(one[0][i]*f1[i])%MOD)%MOD;
        return ans2;

}

int main()
{
    int t,i,j;
    long long ans1=0,ans2=0;
    long long m,n;
    scanf("%d",&t);
    while(t--)
    {   ans1=0;ans2=0;
        scanf("%lld",&n);
        scanf("%lld",&m);
        if(n==0)
            n=1;
        ans1=fib(n+1);
        ans2=fib(m+2);
        if(ans2-ans1<0)
                    printf("%lld\n",(ans2-ans1)+MOD);
        else
             printf("%lld\n",(ans2-ans1));


      //  two=pow(t,n);

 //       for(i=0;i<2;i++)
 //           ans2=(ans2+(two[0][i]*f1[i])%MOD)%MOD;


    }
    return 0;
}
