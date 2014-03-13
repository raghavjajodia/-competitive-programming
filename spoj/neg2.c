#include<stdio.h>

int main()
{   int arr[10000];
    long long n;
    int place=0;
    int i;
    scanf("%lld",&n);
    if(n==0)
        printf("0\n");
    else if (n==1)
        printf("1\n");
    else
    {
        while(n!=1)
    {
        if(n<0 && n%2!=0)
        {
            arr[place]=1;
            n=n/(-2)+1;
            place++;
        }
        else
        {
        arr[place]=n%(-2);
        n=n/(-2);
        place++;
        }

    }

    arr[place]=1;
    while(place>=0)
    printf("%d",arr[place--]);
    }

    return 0;
}
