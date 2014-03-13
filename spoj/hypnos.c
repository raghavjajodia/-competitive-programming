#include<stdio.h>
int count=0;
int breakh(long long n)
{   int sum;
    if(n==1)
       return count;
    else if(n==7)
        return count+5;
    else if(n/10==0)
        return -1;
    else
    {
        sum=0;
        while(n>0)
            {sum+=(n%10)*(n%10);
            n=n/10;}
            count++;
           return breakh(sum);
    }
}
int main()
{   long long n;
    scanf("%lld",&n);
    printf("%d",breakh(n));
    return 0;
}
