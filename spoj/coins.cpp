#include<stdio.h>
#include<map>
using namespace std;
map<long long,long long> v;
long long compute(long long n)
{
    if(n==0)
        return 0;
    if(v.count(n))
        return v[n];


   {
        if(n/2 + n/3 + n/4>=n)
        {

            v[n]=compute(n/2)+compute(n/3)+compute(n/4);
            return v[n];
        }
    else{
            v[n]=n;
            return v[n];
        }
        }
    }





int main()
{

long long n;
while(scanf("%lld",&n)!= EOF )
{
    printf("%lld\n",compute(n));

}



return 0;
}
