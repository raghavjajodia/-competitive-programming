#include<stdio.h>

int main()
{int t,n,m,d,h[501],i,cnt;
    scanf("%d",&t);
    while(t--)
    {   cnt=0;
        scanf("%d %d %d",&n,&m,&d);
        for(i=0;i<n;i++)
           {
                scanf("%d",&h[i]);


           }
           for(i=0;i<n;i++)
           {
               if(h[i]%d==0)
                    cnt+=(h[i]/d)-1;
                else
                    cnt+=h[i]/d;
                if(cnt>=m)
                    break;

           }


        if(cnt>=m)
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;}
