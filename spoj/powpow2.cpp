#include<stdio.h>
#include<vector>
using namespace std;
#define MOD 1000000007
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

long long pow(long long a,long long b)
{
    long long temp=0;
    if(b==0)
        return 1;
    if(b==1)
        return a;
    if(a==0)
        return 0;
    if(a==1)
        return 1;
    if(b&1)
    {
        return ((a*pow(a,b-1))%MOD);
    }
    else
    {
        temp=pow(a,b>>1);
        return ((temp*temp)%MOD);
    }

}

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
    extended_gcd(a,MOD,gcd,x,y);
    if(gcd==1)
        return (long long)((x+MOD)%MOD);
}



int main()
{
vector <long long> v(200001,1);
for(int i=2;i<=200000;i++)
    v[i]=(v[i-1]*i)%MOD;
int t;
int a,b,n;
scanf("%d",&t);
while(t--)
{
    scanint(a);
    scanint(b);
    scanint(n);
long long e=0;
e=(v[2*n]*mod_inv((v[n]*v[n])%MOD))%MOD;
printf("%lld\n",pow((long long)a,pow((long long)b,e)));
}
return 0;
}



