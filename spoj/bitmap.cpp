#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

bool isvalid(int i,int j,int n,int m)
{
    if(i>=0 && i<n && j>=0 && j<m)
        return true;
    else
        return false;
}

int main()
{

int t,n,m;
char str[184];
scanf("%d",&t);
while(t--)
{

    queue< pair<int,int> > q;

    scanf("%d %d",&n,&m);
    int graph[n][m];
    vector< vector<int> > ans(n,vector<int>(m));
     vector< vector<bool> > visited(n,vector<bool>(m));

     for(int i=0;i<n;i++)
        {scanf("%s",&str);

        for(int j=0;j<m;j++)
           if(str[j]=='1')
           {
            pair<int,int> p(i,j);
            q.push(p);
            visited[i][j]=true;
            }
        }

    while(!q.empty())
    {
        pair<int,int> t=q.front();
        int a=t.first;
        int b=t.second;
        visited[a][b]=true;
        q.pop();
        for(int i=0;i<4;i++)
        {

            if(isvalid(a+dx[i],b+dy[i],n,m)&&!visited[a+dx[i]][b+dy[i]])
            {
                visited[a+dx[i]][b+dy[i]]=true;
                ans[a+dx[i]][b+dy[i]]=ans[a][b]+1;
                pair<int,int> z(a+dx[i],b+dy[i]);
                 q.push(z);
            }
        }
    }
    for(int i=0;i<n;i++)
    {for(int j=0;j<m;j++)
        printf("%d ",ans[i][j]);
    printf("\n");
    }
}
    return 0;
}
