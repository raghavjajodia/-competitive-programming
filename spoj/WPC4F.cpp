#include<stdio.h>
#define min(a,b) (a<b?a:b)
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

int n,t;
scanf("%d",&t);
while(t--){

    scanint(n);

   // int mat[h][w];
    int ans[n][3];
    int mat[n][3];

    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
        scanint(mat[i][j]);


    for(int j=0;j<3;j++)
        ans[0][j]=mat[0][j];


    if(n==2)
    {

        for(int j=0;j<3;j++)
            ans[1][j]=mat[1][j]+min(min(ans[0][0],ans[0][1]),ans[0][2]);
}

else{

    for(int i=1;i<n;i++)
    for(int j=0;j<3;j++){
        if(j==0)
            ans[i][j]=mat[i][j]+min(ans[i-1][j+1],ans[i-1][j+2]);
        else if(j==2)
            ans[i][j]=mat[i][j]+min(ans[i-1][j-1],ans[i-1][j-2]);
        else
            ans[i][j]=mat[i][j]+min(ans[i-1][j-1],ans[i-1][j+1]);
        }
}

    int fin=99999999;

    for(int j=0;j<3;j++){


    if(ans[n-1][j]<fin)
    fin=ans[n-1][j];
    }


    printf("%d\n",fin);
}


return 0;
}
