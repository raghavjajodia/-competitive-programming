#include<stdio.h>
#define max(a,b) (a>b?a:b)
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

int t,h,w;
scanf("%d",&t);
while(t--)
{

    scanf("%d %d",&h,&w);
   // int mat[h][w];
    int ans[h][w];
    int temp;
    for(int j=0;j<w;j++)
        scanint(ans[0][j]);

    for(int i=1;i<h-1;i++){
            scanint(temp);
            ans[i][0]=temp+max(ans[i-1][0],ans[i-1][1]);
        for(int j=1;j<w-1;j++)
        {
          scanint(temp);
        ans[i][j]=temp+max(max(ans[i-1][j-1],ans[i-1][j]),ans[i-1][j+1]);
        }
            scanint(temp);
            ans[i][w-1]=temp+max(ans[i-1][w-1],ans[i-1][w-2]);
    }

    int fin=0;

     scanint(temp);
            ans[h-1][0]=temp+max(ans[h-2][0],ans[h-2][1]);
            if(ans[h-1][0]>fin)
                fin=ans[h-1][0];



    for(int j=1;j<w-1;j++){
        scanint(temp);
        ans[h-1][j]=temp+max(max(ans[h-2][j-1],ans[h-2][j]),ans[h-2][j+1]);
    if(ans[h-1][j]>fin)
    fin=ans[h-1][j];
    }

    scanint(temp);
    ans[h-1][w-1]=temp+max(ans[h-2][w-2],ans[h-2][w-1]);
    if(ans[h-1][w-1]>fin)
        fin=ans[h-1][w-1];

    printf("%d\n",fin);

}

return 0;
}
