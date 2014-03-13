#include<stdio.h>
#include<algorithm>

bool compare(int i,int j)
{
    return (i<j);
}
int main()
{
    int a,b,c[10],d[10],e[10],i,j,k,sum;
    scanf("%d %d",&a,&b);
    while(a!=0 && b!=0)
    {   sum=0;
        for(i=0;i<a;i++)
            scanf("%d",&c[i]);
        for(i=0;i<b;i++)
            scanf("%d",&d[i]);
        std::sort(c,c+a,compare);
        std::sort(d,d+b,compare);

        j=0;
        k=0;
        for(i=0;i<a;i++)
        {   sum+=c[i];
        if(j<b){
            while(c[i]>d[j])
               {sum+=d[j];
                   j++;}
            if(c[i]==d[j])
                {e[k]=c[i];
                sum+=d[j];
                j++;
                k++;}}

        }
        for(i=0;i<k;i++)
            sum=sum-e[i];
        printf("%d\n",sum);
        scanf("%d %d",&a,&b);

    }
return 0;}
