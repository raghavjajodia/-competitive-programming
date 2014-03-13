
#include<stdio.h>
#include<vector>
using namespace std;
const long long MOD = 1000000007;
typedef vector<vector<int> > matrix;




matrix mulmat(matrix m1,matrix m2)
{   int i,j,k;
    matrix m3(4,vector<int>(4));
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
        for(k=0;k<4;k++)
        m3[i][j]=(m3[i][j]+(m1[i][k]*m2[k][j])%MOD)%MOD;
    return m3;

}


matrix pow(matrix a,int n)
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
vector<int> fib(int n)
{

    int i;
        vector<int>ans(4);
    matrix t(4,vector<int>(4));
        matrix one(4,vector<int>(4));
   //     matrix two(2,vector<long long>(2));
        vector<int> base(4);
        base[0]=3;
        base[1]=1;
        base[2]=1;
        base[3]=1;

        t[0][0]=1;
        t[0][1]=1;
        t[0][2]=2;
        t[0][3]=1;
        t[1][1]=1;
        t[1][2]=1;
        t[2][0]=1;
        t[3][2]=1;
        t[3][3]=1;

//        for(int i=0;i<4;i++){
//            for(int j=0;j<4;j++)
//            printf("%d ",t[i][j]);
//            printf("\n");}
//            printf("\n");
        one=pow(t,n-1);
//        for(int i=0;i<4;i++){
//            for(int j=0;j<4;j++)
//            printf("%d ",one[i][j]);
//            printf("\n");}
          for(int i=0;i<4;i++)
          for(int k=0;k<4;k++)
          ans[i]=ans[i]+one[i][k]*base[k];

//          for(int i=0;i<4;i++)
//            printf("%d ",ans[i]);
        return ans;

}

int main()
{
   int n;
   scanf("%d",&n);
  printf("%d",fib(n-1)[0]+fib(n)[1]+fib(n)[3]);

    return 0;
}
