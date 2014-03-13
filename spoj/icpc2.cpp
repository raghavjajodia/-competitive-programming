#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
int t,n;
long long b[10005];
long long temp;
bool flag;
scanf("%d",&t);
while(t--)
{   flag=false;
    long long sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {scanf("%lld",&temp);
        sum+=temp;
        b[i]=temp;}
    std::sort(b,b+n);
    int j=n-1;
    long long sumtemp=0;
    while(flag==false && j>=0)
    {
        if(360.0/(sum-sumtemp)*b[j]<180)
            flag=true;
        else
            sumtemp+=b[j];
        j--;

    }
       if(flag==false)
            printf("-1\n");
       else
        printf("%d\n",j+2);


    }


return 0;
}
