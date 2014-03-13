#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   int t,num1,num2,num3,i,locp,locm,loce;
    char s[1000];
    scanf("%d",&t);
    while(t>0)
{
      scanf(" %[^\n]s",s);

        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='+')
                locp=i;
            if(s[i]=='m')
                locm=i;
            if(s[i]=='=')
                loce=i;
        }
        num1=0;
        num2=0;

        if (locm<locp)
        {   i=locp+2;

            while(s[i]!=' ')
            {num1=num1*10+(s[i])-48;
            i++;}

            i=loce+2;
            while(s[i]!='\0')
            {num2=num2*10+s[i]-48;
            i++;}
            num3=num2-num1;
            printf("%d + %d = %d\n",num3,num1,num2);

        }
        else if(locm>locp && locm<loce)
        {
            i=0;
            while(s[i]!=' ')
                {num1=num1*10+s[i]-48;
                i++;}
            i=loce+2;
            while(s[i]!='\0')
                {num2=num2*10+s[i]-48;
                i++;}
            num3=num2-num1;
            printf("%d + %d = %d\n",num1,num3,num2);
        }
        else
        {
            i=0;
            while(s[i]!=' ')
            {
                num1=num1*10+s[i]-48;
                i++;
            }
            i=locp+2;
            while(s[i]!=' ')
                {num2=num2*10+s[i]-48;
                i++;}
            num3=num1+num2;
            printf("%d + %d = %d\n",num1,num2,num3);
        }


        t--;
    }
    return 0;

}
