#include<stdio.h>
#include<vector>
#define gc getchar_unlocked
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main()
{
int q,n,m;
scanf("%d",&q);
while(q--)
{   int count=1;
    int i=2;
    scanint(n);
    scanint(m);
    vector <long long> v(m+1,1);
    while(i<=m)
    {
        if(v[i])
        {
            if(n%i==0)
            {
                for(int j=1;i*j<=m;j++)
                    v[i*j]=0;
                count--;

            }
            count++;

        }

        i++;
    }
 /*   for(int j=1;j<=m;j++)
        if(v[j]==1)
        count++;*/

    printf("%d\n",count);
}


return 0;}
