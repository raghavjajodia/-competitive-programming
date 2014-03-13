#include<cstdio>

using namespace std;

long long int f(int n)
{
  long long int sum = 0;
  switch(n%2)
   {
     case 0: for(int i=1;i<=n/2;i++)
	            if(n%i==0)
				   sum+=i;
				   break;
	 case 1: for(int i=1;i<n/2+1;i+=2)
                  if(n%i==0)
                    sum+=i;
                   break;
    }
   return sum;
}

long long int a(int n)
{
   long long int an;
   if(n==1 || n==0)
     return 0;
   an = a(n-1) + f(n);
    return an;
   }

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n;
	scanf("%d",&n);
	printf("%lld\n",a(n));
	}
	return 0;
}
