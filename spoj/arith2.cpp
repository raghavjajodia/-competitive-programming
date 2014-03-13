#include<stdio.h>
int main()
{   int i,j=0;
    int t;
    char str[10000];



    scanf("%d",&t);
    while(t--)
    {   long long temp=0,ans=0;
        j=0;
        char sign='+';
        printf("\n");
        scanf(" %[^\n]s",&str);

        for(i=0;str[i]!='=';i++)
        {
            if(str[i]!=' ' && str[i]!='+' && str[i]!='-' && str[i]!='*' && str[i]!='/')
                temp=temp*10+str[i]-48;

            else if (str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
            {
                if(sign=='+')
                    ans=ans+temp;
                else if(sign=='*')
                    ans=ans*temp;
                else if(sign=='-')
                    ans=ans-temp;
                else
                    ans=ans/temp;
                temp=0;
                sign=str[i];

                            }
            else
                continue;
        }
        if(sign=='+')
                    ans=ans+temp;
                else if(sign=='*')
                    ans=ans*temp;
                else if(sign=='-')
                    ans=ans-temp;
                else
                    ans=ans/temp;
        printf("%lld\n",ans);

    }
    return 0;
}
