#include<stdio.h>
#include<math.h>
long long pow(long long n,long long k)
{   long long temp=0;
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(k==0)
        return 1;
    else if(k==1)
        return n;
    else if(k&1)
        return((n%10000007)*(pow(n,k-1)%10000007)%10000007);
    else
    {
        temp=pow(n,k>>1)%10000007;
        return((temp*temp)%10000007);
    }
}
int main()
{
long long n,k;
scanf("%lld %lld",&n,&k);
while(n!=0 || k!=0){
printf("%lld\n",(((((pow(n-1,n-1)+pow(n-1,k))%10000007)<<1)%10000007+pow(n,n))%10000007+pow(n,k))%10000007);
scanf("%lld %lld",&n,&k);
}
return 0;}
