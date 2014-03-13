#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
vector<bool> v1(47000,1);
v1[0]=false;
v1[1]=false;
for(int i=4;i<v1.size();i=i+2)
    v1[i]=false;
for(int i=3;i*i<47000;i=i+2)
{
    if(v1[i]==true)
    {
        for(int j=i*i;j<v1.size();j=j+i)
            v1[j]=false;
    }
}

vector<long long> list;
list.push_back(2);
for(int j=3;j<v1.size();j=j+2)
{
    if(v1[j]==true)
        list.push_back(j);

}

int t,n,i=0;
long long prod,temp=0;
scanf("%d",&t);
for(int j=1;j<=t;j++)
{   i=0;
    prod=1;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld",&temp);
        prod=prod*temp;
    }
    prod++;
    long long copy=0;
    copy=prod;
    while(list[i]*list[i]<=prod)
    {
       while(copy%list[i]==0)
        copy=copy/list[i];
        i++;
    }
    printf("Case #%d: %lld\n",j,copy);

}

return 0;
}
