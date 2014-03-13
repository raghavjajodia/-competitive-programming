#include<stdio.h>

#include<cstdio>
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}


int pow(int n,int k)
{   int temp=0;
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(k==0)
        return 1;
    else if(k==1)
        return n;
    else if(k%2==1)
        return((n%10000007)*(pow(n,k-1)%10000007)%10000007);
    else
    {
        temp=pow(n,k/2)%10000007;
        return((temp*temp)%10000007);
    }
}
int main()
{

int n,k;
scanint(n);
scanint(k);
while(n!=0 || k!=0){

printf("%d\n",(((2*((pow(n-1,n-1)+pow(n-1,k))%10000007))%10000007+pow(n,n))%10000007+pow(n,k))%10000007);
scanint(n);
scanint(k);
}
return 0;}
