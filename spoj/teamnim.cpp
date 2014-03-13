#include<stdio.h>
#include<string.h>
int main()
{
    int t,count;
    long long x,y,z,temp;

    scanf("%d",&t);
    while(t--)
    {   count=0;
        scanf("%lld %lld %lld",&x,&y,&z);
        char m[5][15];
        for(int i=0;i<4;i++)
            scanf("%s",&m[i]);
        while(x!=0 || y!=0 || z!=0)
        {
            count++;
            printf("%lld %lld %lld    %lld  %d     ",x,y,z,((x^y)^z),count);
            if(((x^y)^z)==0)
            {
                if(x!=0)
                    {x=0;}
                else if(y!=0)
                    {y=0;}
                else if(z!=0)
                    z=0;
            }
            else
            {
                if(x!=0){
                    if((y^z)<x)
                        x=y^z;
                    else if((x^z)<y)
                        y=x^z;
                    else
                        z=x^y;}
                else if(y!=0)
                {
                    if(z<y)
                    {
                        y=z;
                    }
                    else
                        z=y;
                }

                else
                    z=0;
            }

        }
        printf("%d",count);
        if(strcmp(m[count%4],"Elayne")==0)
            printf("Aviendha/Birgitte\n");
        else if(strcmp(m[count%4],"Nynaeve")==0)
            printf("Aviendha/Birgitte\n");
        else if(strcmp(m[count%4],"Aviendha")==0)
            printf("Elayne/Nynaeve\n");
        else
            printf("Elayne/Nynaeve\n");

    }

    return 0;
}
