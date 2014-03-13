#include<stdio.h>
int main()
{
    int n,flag,i;
    int a[100002],b[100002];
    scanf("%d",&n);
    while(n!=0)
    {   flag=1;
        for(i=0;i<n;i++)

            scanf("%d",&a[i]);


        for(i=0;i<n;i++)
        {
            b[a[i]-1]=i+1;
            if(i+1!=a[a[i]-1])
                {flag=0;
                break;}
        }
        if (flag==0)
            printf("not ambiguous\n");
        else
            printf("ambiguous\n");
    scanf("%d",&n);

    }

     return 0;

    }




