#include<stdio.h>
int main()
{
long long a,b,s;
long long m[16][136];
for(int i=1;i<=9;i++)
    m[1][i]=1;
for(int i=10;i<=135;i++)
    m[1][i]=0;

for(int n=2;n<=15;n++)
    for(int j=1;j<=135;j++)
{
    m[n][j]=0;
    int k=j;
    if(j<=9*n)
    {
        while(k>=j-9 && k>=1)
        {
            m[n][j]+=m[n-1][k];
            k--;
        }

    }
}




return 0;}
