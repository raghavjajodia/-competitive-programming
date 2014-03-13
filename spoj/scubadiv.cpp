#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
#define inf 80000000
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
    int c;
    scanf("%d",&c);
    while(c--)
    {
        int t,a;
        int ox[1002],nit[1002],weight[1002];
        scanint(t);
        scanint(a);
        int n;
        scanint(n);
        for(int i=0;i<n;i++)
        {
            scanint(ox[i]);
            scanint(nit[i]);
            scanint(weight[i]);
            //scanf("%d %d %d",&ox[i],&nit[i],&weight[i]);
        }

        //int dp[23][81][1002];
        int prev[23][81];
        int next[23][81];

for(int i=0;i<=t;i++)
    for(int j=0;j<=a;j++)
    {

        int temp1,temp2;
        temp1=max(0,i-ox[0]);
        temp2=max(0,j-nit[0]);
        if(temp1==0&&temp2==0)
        prev[i][j]=weight[0];
        else
            prev[i][j]=inf;
        if(i==0 && j==0)
            prev[i][j]=0;

    }



for(int k=2;k<=n;k++){

    for(int i=0;i<=t;i++)
    for(int j=0;j<=a;j++)
    {
        if(i==0 && j==0)
        next[i][j]=0;
        next[i][j]=prev[i][j];
        int temp=prev[max(0,i-ox[k-1])][max(0,j-nit[k-1])]+weight[k-1];
        if(temp<next[i][j])
            next[i][j]=temp;
    }
    memcpy(prev,next,sizeof(next));
}
printf("%d\n",prev[t][a]);








        printf("\n");
    }

    return 0;
}
