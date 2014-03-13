#include<stdio.h>

long long simple(double rate,int serv,int time,long long pr)
{
    long long net=0;
    int i=0;
    for(i=0;i<time;i++)
    {
        net+=(int)((pr-i*serv)*rate);

    }
    return net-time*serv+pr;
}

long long compound(double rate,int serv,int time,long long pr)
{
    long long net=0;
    if (time==0)
    return pr;
    else
    return (compound(rate,serv,time-1,pr-serv+(int)(pr*rate)));

}

int main()
{
    int t,i;
    long long pr;
    long long max;
    scanf("%d",&t);
    while(t--)
    {
        pr=0;
        double rate;
        int time;
        int op;
        int mode;
        int serv;
        long long a=0;
        scanf("%lld",&pr);
        scanf("%d",&time);
        scanf("%d",&op);
        max=0;
        for(i=0;i<op;i++)
        {
            scanf("%d %lf %d",&mode,&rate,&serv);
            if(mode==0)
                {a=simple(rate,serv,time,pr);

                if(a>max)
                    max=a;
                }
            else
            {
                a=compound(rate,serv,time,pr);

                if(a>max)
                    max=a;
            }
        }
        printf("%lld\n",max);

    }
    return 0;
}
