#include<stdio.h>
#define max(a,b) (a>b?a:b)
int main()
{

int t,h,w;
scanf("%d",&t);
while(t--)
{

    scanf("%d %d",&h,&w);
    int mat[h][w];
    int ans[h][w];
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++)
        scanf("%d",&mat[i][j]);
    for(int j=0;j<w;j++)
        ans[0][j]=mat[0][j];
    for(int i=1;i<h;i++)
        for(int j=0;j<w;j++)
        {
          if(j==0)
          ans[i][j]=mat[i][j]+max(ans[i-1][j],ans[i-1][j+1]);
        else if(j==w-1)
            ans[i][j]=mat[i][j]+max(ans[i-1][j-1],ans[i-1][j]);
        else
        ans[i][j]=mat[i][j]+max(max(ans[i-1][j-1],ans[i-1][j]),ans[i-1][j+1]);}


    int fin=0;
    for(int i=0;i<w;i++)
    if(ans[h-1][i]>fin)
    fin=ans[h-1][i];
    printf("%d\n",fin);

}

return 0;
}
