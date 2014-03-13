#include<math.h>
#include<stdio.h>
int main()
{int t,n;
long long a,c,d;
scanf("%d",&t);
while(t>0)
{c=0;
d=0;
scanf("%lld",&a);
n=(int)(sqrt(1+8*a)-1)/2;
if(n*(n+1)/2!=a)
 n=n+1;

if(n%2==0)
{c=a-(n*(n-1)/2);
 d=n+1-c;
}
 else
     {  d=a-(n*(n-1)/2);
         c=n+1-d;

     }
printf("TERM %lld IS %lld/%lld\n",a,c,d);
t--;
}

return 0;


}
