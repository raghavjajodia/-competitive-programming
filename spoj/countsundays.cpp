#include<stdio.h>
int isleap(int n)
{
     if((n%100)!=0 && (n%100)%4==0)
        return 1;
     else if ((n%100)==0 && (n/100)%4==0)
        return 1;
     else
        return 0;
}

int main()
{
    int t,m,y,ly,n,firstdate,j,days,k;
    scanf("%d",&t);
    while(t> 0)
    {
        scanf("%d %d",&m,&y);
        firstdate=2;
        for(k=2000;k<y;k++)
        if(isleap(k))
            firstdate=firstdate-2;
        else
            firstdate=firstdate-1;

//        n=((y-1997)/4)+1;
//        firstdate=5+(n-1)*(-5)-(y-1997)%4;
        if (firstdate<=0)
        firstdate=firstdate+(((-firstdate)/7)+1)*7;
//
//        printf("%d",firstdate);

//        printf("%d",firstdate);

        for(j=0;j<m-1;j++)
        {   if(j==0||j==2||j==4||j==6||j==7||j==9||j==11)
                days=31;
            else
                days=30;
            if(j==1)
            {
                if(isleap(y))
                days=29;
                else
                days=28;
            }

            while(firstdate<=days)
            {
            firstdate=firstdate+7;}

            firstdate-=days;

        }
            days=31;
        if(j==0||j==2||j==4||j==6||j==7||j==9||j==11||j==12)
                days=31;
            else
                days=30;
            if(j==1 && isleap(y))
                days=29;
            else if (j==1 && !isleap(y))
                days=28;

        while(firstdate<=days)
           {
            printf("%d ",firstdate);
            firstdate=firstdate+7;}
        printf("\n");
        t--;
    }
}
