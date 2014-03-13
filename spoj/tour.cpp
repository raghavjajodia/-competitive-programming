#include<stdio.h>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
int n;
vector<string> v;
string arr;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    cin>>arr;

    v.push_back(arr);

}
int cost[n][n];
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    scanf("%d",&cost[i][j]);
int p;
int prev=0;
scanf("%d",&p);
long long sum=0;
while(p--)
{
    cin>>arr;
    for(int j=0;j<n;j++)
    {
        if(arr.compare(v[j])==0)
        {
            sum+=cost[prev][j];
            prev=j;
            break;
        }
    }
}
printf("%lld",sum);


return 0;}
