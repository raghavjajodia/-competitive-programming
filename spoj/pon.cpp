#include<stdio.h>
#include<stdlib.h>

long long mulmod(long long a,long long b,long long c)
   {
       long long x = 0,y=a%c;
       while(b > 0)
       {
          if(b%2 == 1)
          {
              x = (x+y)%c;
          }
          y = (y*2)%c;
          b /= 2;
       }
       return x%c;
    }
long long modulo(long long a,long long n,long long MOD)
{
    if(n==0)
        return 1;
    if(n==1)
        return a;
    if(n%2==1)
        return ((a*modulo(a,n-1,MOD))%MOD);
    else
    {
        long long temp=modulo(a,n/2,MOD);
        return((temp*temp)%MOD);
    }
}

bool Miller(long long p,int iteration){
    if(p<2){
        return false;
    }
    if(p!=2 && p%2==0){
        return false;
    }
    long long s=p-1;
    while(s%2==0){
        s/=2;
    }
    for(int i=0;i<iteration;i++){
        long long a=rand()%(p-1)+1,temp=s;
        long long mod=modulo(a,temp,p);
        while(temp!=p-1 && mod!=1 && mod!=p-1){
            mod=mulmod(mod,mod,p);
            temp *= 2;
        }
        if(mod!=p-1 && temp%2==0){
            return false;
        }
    }
    return true;
}
int main()
{

int t;
long long p;
scanf("%d",&t);
while(t--)
{
    scanf("%lld",&p);
    if(Miller(p,5))
        printf("YES\n");
    else
        printf("NO\n");
}
return 0;}
