#include<stdio.h>
#include<algorithm>
using namespace std;
#include<string.h>
int main()
{
int t;
char a[2002],b[2002];
int temp1[2002],temp2[2002];
int tem;
scanf("%d",&t);
while(t--)
{
    scanf("%s",&a);
    scanf("%s",&b);
    int m=strlen(a);
    int n=strlen(b);
    for(int i=0;i<=n;i++)
        temp1[i]=i;
    for(int i=1;i<=m;i++)
    {
        temp2[0]=i;
        for(int j=1;j<=n;j++)
    {
        temp2[j]=temp1[j]+1;
        if(temp2[j-1]+1<temp2[j])
            temp2[j]=temp2[j-1]+1;
        {if(a[j-1]==b[i-1])
            tem=temp1[j-1];
        else
            tem=temp1[j-1]+1;
        }
        if(tem<temp2[j])
            temp2[j]=tem;
    }
        copy(temp2,temp2+n+1,temp1);
    }
    printf("%d\n",temp1[n]);

    }


return 0;
}
