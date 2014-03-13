#include<stdio.h>
#include<vector>
using namespace std;
void extended_gcd(int a, int b, int &gcd, int &x, int &y)
{
    x=0; y=1; gcd=b;
    int u=1,v=0,m,n,q,r;
    while(a!=0)
    {
        q=gcd/a; r=gcd%a;
        m=x-u*q; n=y-v*q;
        gcd=a; a=r; x=u; y=v; u=m; v=n;
    }
}

long long mod_inv(int a)
{
    int gcd,x,y;
    extended_gcd(a,1000000007,gcd,x,y);
    if(gcd==1)
        return (long long)((x+1000000007)%1000000007);
}
/*

long long c(int n,int r,vector<long long>v)
{
    /*long long prod=1;
    long long temp1=0,temp2=0;
    if(r==0)
        return 1;
    for(int i=1;i<=r;i++)
    {
        prod=(prod*i)%1000000007;

    }
    temp1=prod;
    prod=(prod*(r+1))%1000000007;
    temp2=prod;
    for(int i=r+2;i<=n;i++)
        prod=(prod*(i))%1000000007;
    return((prod*mod_inv((temp1*temp2)%1000000007))%1000000007);

}*/
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main()
{

int t;
vector <long long> fact(2000000,1);
for(long long i=2;i<=1999999;i++)
    fact[i]=(fact[i-1]*i)%1000000007;
int n;
scanf("%d",&t);
while(t--){
     long long prod=1;
    scanint(n);
    long long ncr=0;
    ncr=(fact[2*n-1]*mod_inv((fact[n-1]*fact[n])%1000000007))%1000000007;
    printf("%lld\n",(n*ncr)%1000000007);

}

return 0;}
