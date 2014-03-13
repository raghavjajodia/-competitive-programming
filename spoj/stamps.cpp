#include<stdio.h>
int a[1002];

void sort(int a[1002],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
    {
        if(a[j]<a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}



int main()
{   int j,t,summ,sum,n,i;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d %d",&summ,&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,n);
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum>=summ)
                break;
        }

        if(sum<summ)
        {
        printf("Scenario #%d:\n",j+1);
        printf("impossible\n\n");
        }
        else

       {
        printf("Scenario #%d:\n",j+1);
        printf("%d\n\n",i+1);


        }
    }
    return 0;
}
