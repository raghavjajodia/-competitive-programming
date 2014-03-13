#include<stdio.h>
#include<cstdio>


inline void fastRead_int(int &x) {
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;
    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());
    if(c=='-') {
     neg = 1;
     c = getchar_unlocked();
    }
    for(; c>47 && c<58 ; c = getchar_unlocked()) {
     x = (x<<1) + (x<<3) + c - 48;
    }
    if(neg)
     x = -x;
}

int main()
{
    int t,temp=0;
    int n,i;
    int count=0;
    int arr[1005];
    fastRead_int(t);
    for(int j=0;j<t;j++)
    {   count=0;
        temp=0;
        fastRead_int(n);
        for(i=0;i<n;i++)
         {fastRead_int(arr[i]);
         temp^=arr[i];
             }
        if(temp==0)
            count=0;
        else{
        for(i=0;i<n;i++)
        {
            if((temp^arr[i])<arr[i])
                count++;
        }
        }
        printf("Case %d: %d\n",j+1,count);
    }




return 0;}
