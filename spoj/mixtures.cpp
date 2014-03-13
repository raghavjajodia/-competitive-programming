#include<stdio.h>
#include<iostream>
using namespace std;
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
int n,num[102],j;
long long color[101][101];
long long smoke[101][101];
while(scanf("%d",&n)==1){
for(int i=0;i<n;i++)
   {
    scanint(num[i]);
    color[i+1][i+1]=num[i];}

for(int i=1;i<=n-1;i++)
{
    for(int j=i+1;j<=n;j++)
    {

        color[i][j]=(color[i][j-1]+num[j-1])%100;
    }
}

for(int l=2;l<=n;l++)
{
for(int i=1;i<=n-l+1;i++)
{

    j=i+l-1;
    smoke[i][j]=smoke[i+1][j]+color[i][i]*color[i+1][j];
    for(int k=i+1;k<=j-1;k++)
    {

        int temp=smoke[i][k]+smoke[k+1][j]+color[i][k]*color[k+1][j];
        if(temp<smoke[i][j])
            smoke[i][j]=temp;
    }
}
}


printf("%d\n",smoke[1][n]);
}
return 0;
}
