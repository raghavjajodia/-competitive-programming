#include<stdio.h>
#include<vector>
#include<queue>
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
int n,m;
int a,b;

scanint(n);
scanint(m);
vector<int> graph[n];
if(m!=n-1)
{
    printf("NO");
    return 0;
}
for(int i=0;i<m;i++)
{
    scanint(a);
    scanint(b);

graph[a-1].push_back(b-1);
graph[b-1].push_back(a-1);

    }

bool visited[n];
for(int i=0;i<n;i++)
    visited[i]=false;

queue<int> q;
q.push(0);
while(!q.empty())
{
    int curr=q.front();
    visited[curr]=true;
    q.pop();
    for(int i=0;i<graph[curr].size();i++)
    {
        if(!visited[graph[curr][i]])
        {
            q.push(graph[curr][i]);
            visited[graph[curr][i]]=true;
        }
    }
}
for(int i=0;i<n;i++)
{
    if(visited[i]==false)
    {
        printf("NO\n");
        return 0;
    }
}
printf("YES\n");
return 0;

}
