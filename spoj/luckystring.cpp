#include<stdio.h>
#include<math.h>

int main()
{

    long long pow[55];
pow[0]=1;
for(int i=1;i<50;i++)
    pow[i]=pow[i-1]*2;



long long arr[44];
arr[0]=0;

for(int i=1;i<42;i++)
{
    arr[i]=arr[i-1]+pow[i]*i;
}


int t;

long long n;
scanf("%d",&t);
while(t--)
{   int d;
    scanf("%lld",&n);
    int digits;
    for(int i=0;i<42;i++)
        if(n<=arr[i])
        {digits=i;
            break;}

//    printf("%d\n",digits);
    int num[digits];
    for(int i=0;i<digits;i++)
        num[i]=4;

    long long perm,dig;
    if((n-arr[digits-1])%digits==0)
        {perm=((n-arr[digits-1])/digits);
        dig=digits;}
    else
        { perm=((n-arr[digits-1])/digits)+1;
        dig=(n-arr[digits-1])%digits;}

  //  printf("%lld %lld\n",perm,dig);

    long long temp;

  /*   for(int k=0;k<digits;k++)
                printf("%d",num[k]);
            printf("\n");*/

    while(perm!=1){
    for(int j=1;j<=50;j++)
    {
        if(perm<=pow[j])
        {
      /*      for(int k=0;k<digits;k++)
                printf("%d",num[k]);
            printf("\n");*/
            num[digits-j]=5;
            temp=j;
            break;
        }

    }

    perm=perm-pow[temp-1];

    }







    d=num[dig-1];
    if(d==4)
        printf("Hacker\n");
    else
        printf("Earth\n");
}
;


return 0;}
