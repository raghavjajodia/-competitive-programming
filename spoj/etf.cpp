#include<stdio.h>


int etf(int n)
{
    int result=n;
    if(!(n&1))
        result-=result>>1;
    while(!(n&1))
        n=n>>1;
    for(int i=3;i*i<=n;i=i+2)
    {
  //      printf("%d\n",i);
        if(n%i==0){
            result-=result/i;}
  //          printf("%d\n",result);}
        while(n%i==0)
            n/=i;

    }
    if(n>1)
        result-=result/n;
    return result;

}
// int fi(int n)
//     {
//       int result = n;
//       for(int i=2;i*i <= n;i++)
//       {
//         if (n % i == 0) result -= result / i;
//         while (n % i == 0) n /= i;
//       }
//       if (n > 1) result -= result / n;
//       return result;
//     }

int main()
{
int t;
int n;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    printf("%d\n",etf(n));

}
return 0;}
