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


long long mul(vector< vector<long long> >a,vector< vector<long long> >b,int n)
{   vector< vector<long long> >ans (n,vector<long long>(n));
    long long ret=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        for(int k=0;k<n;k++)
        ans[i][j]+=a[i][k]*b[k][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        ret+=ans[i][j];
    return ret;

}




int main()
{
int n,q;
scanf("%d",&n);
vector<long long> rowa(n);
vector<long long> rowb(n);
vector<long long> columna(n);
vector<long long> columnb(n);
vector< vector<long long> > a(n,vector<long long>(n));
vector< vector<long long> > b(n,vector<long long>(n));
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
{
    scanf("%lld",&a[i][j]);
    rowa[i]+=a[i][j];

    }

for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){

    scanf("%lld",&b[i][j]);
    rowb[i]+=b[i][j];
    }

for(int j=0;j<n;j++)
    for(int i=0;i<n;i++)
{
    columna[j]+=a[i][j];
    columnb[j]+=b[i][j];
}

long long sum=mul(a,b,n);

//printf("%lld\n",sum);
/*for(int i=0;i<n;i++)
    printf("%lld ",rowa[i]);
printf("\n");

for(int i=0;i<n;i++)
    printf("%lld ",rowb[i]);
printf("\n");

for(int i=0;i<n;i++)
    printf("%lld ",columna[i]);
printf("\n");

for(int i=0;i<n;i++)
    printf("%lld ",columnb[i]);
printf("\n");
*/
scanf("%d",&q);
while(q--)
{
    char ch;
    int i,j;
    long long k;
    scanf(" %c ",&ch);
    scanint(i);
    scanint(j);
    scanf("%lld",&k);

  //  printf(" %c\n",ch);
    if(ch=='A')
        {
            long long delta=(k-a[i][j])*rowb[j];
    //        printf("%lld\n",delta);
            sum=sum+delta;
            printf("%lld\n",sum);

            rowa[i]=rowa[i]-a[i][j]+k;
            columna[j]+=k-a[i][j];
            a[i][j]=k;
        }
    else
    {
        long long delta=(k-b[i][j])*columna[i];
      //  printf("%lld\n",delta);
            sum+=delta;
            printf("%lld\n",sum);
             rowb[i]=rowb[i]-b[i][j]+k;
            columnb[j]+=k-b[i][j];
            b[i][j]=k;
    }


}


return 0;
}

