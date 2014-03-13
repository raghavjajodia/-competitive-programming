#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
int c,n;
int s[2002],v[2002];
scanf("%d %d",&c,&n);
s[0]=0;
v[0]=0;
for(int i=1;i<=n;i++)
{
    scanf("%d %d",&s[i],&v[i]);
}

long long temp1[2002]={0};
long long temp2[2002]={0};
for(int j=1;j<=n;j++){
for(int i=1;i<=c;i++){
        if(s[j]<=i)
    temp2[i]=max(temp1[i-s[j]]+v[j],temp1[i]);
        else
        temp2[i]=temp1[i];}
    copy(temp2,temp2+c+1,temp1);

}
printf("%lld",temp1[c]);
return 0;
}


