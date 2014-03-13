#include<stdio.h>
int main()
{long long n;
scanf("%lld",&n);
if(n%10==0)
    printf("2");
else
{
    printf("1\n");
    printf("%lld",n-(n/10)*10);

}
return 0;
}
