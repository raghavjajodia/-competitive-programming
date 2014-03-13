#include<stdio.h>
#include<string.h>
#define max(a,b) (a>b?a:b)
void add(char num1[502],char num2[502],char ans[504])
{
    int len1,len2,carry,a,i,temp;
    carry=0;
    len1=strlen(num1);
    len2=strlen(num2);
    a=max(len1,len2);
    for(i=a;i>0;i--)
    {   if(len1>0 && len2>0)
            temp=num1[len1-1]+num2[len2-1]-96+carry;
        else if (len1>0)
            temp=num1[len1-1]-48+carry;
        else
            temp=num2[len2-1]-48+carry;

        ans[i-1]=(temp%10)+48;
        carry=temp/10;

        len1--;len2--;
    }
if(carry!=0)
{
    ans[a+1]='\0';
    for(i=a;i>0;i--)
    ans[i]=ans[i-1];
    ans[0]=carry+48;
}
else
    ans[a]='\0';
//printf("%s\n",ans);

}

void sub(char num1[502],char num2[502],char ans[504])
{
    int len1,len2,carry,i,temp,k;
    carry=0;
    len1=strlen(num1);
    len2=strlen(num2);
    for(i=len1;i>0;i--)
    {   if(len2>0)
            {if((num1[i-1]-carry)<num2[len2-1])
                {ans[i-1]=num1[i-1]-carry+58-num2[len2-1];
                carry=1;}
            else
                {ans[i-1]=num1[i-1]-num2[len2-1]+48-carry;
                carry=0;}
            }
        else

           {
                if((num1[i-1]-48-carry)<0)
                {ans[i-1]=num1[i-1]-carry+10;
                carry=1;}
            else
                {ans[i-1]=num1[i-1]-carry;
                carry=0;}
            }
    len2--;
    }
i=0,k=0;
while(ans[i]=='0')
    i++;
if(i==len1)
{
    ans[0]='0';
    ans[1]='\0';
}
else
{while(i<len1)
    ans[k++]=ans[i++];

ans[k]='\0';
}
//printf("%s\n",ans);

}

void mul(char num1[502],char digit,char ans[1004])
{
    int i, len1,carry;
    carry=0;
    len1=strlen(num1);
    for(i=len1-1;i>=0;i--)
    {
        ans[i]=((num1[i]-48)*(digit-48)+carry)%10+48;
        carry=((num1[i]-48)*(digit-48)+carry)/10;
    }
    if(carry!=0)
    {   len1++;
        ans[len1]='\0';
        for(i=len1-1;i>0;i--)
            ans[i]=ans[i-1];
        ans[0]=carry+48;
    }
    else
        ans[len1]='\0';

    i=0;
    while(ans[i]=='0')
        i++;
    if(i==len1)
    {   ans[0]='0';
        ans[1]='\0';}

}



void showadd(char num1[502],char num2[502],char ans[504])
{   int i,len1,len2,len3,maxi;
    add(num1,num2,ans);
    len1=strlen(num1);
    len2=strlen(num2);
    len3=strlen(ans);
    maxi=max(max(len1,len2+1),len3);
    for(i=1;i<=maxi-len1;i++)
        printf(" ");
    printf("%s\n",num1);
    for(i=1;i<=maxi-len2-1;i++)
        printf(" ");
    printf("+%s\n",num2);
    for(i=1;i<=maxi-max(len2+1,len3);i++)
        printf(" ");
    for(i=1;i<=max(len2+1,len3);i++)
        printf("-");
    printf("\n");
    for(i=1;i<=maxi-len3;i++)
        printf(" ");
    printf("%s\n\n",ans);
}

void showsub(char num1[502],char num2[502],char ans[504])
{
    int i,len1,len2,len3,maxi;
    sub(num1,num2,ans);
    len1=strlen(num1);
    len2=strlen(num2);
    len3=strlen(ans);
    maxi=max(max(len1,len2+1),len3);
    for(i=1;i<=maxi-len1;i++)
        printf(" ");
    printf("%s\n",num1);
    for(i=1;i<=maxi-len2-1;i++)
        printf(" ");
    printf("-%s\n",num2);
    for(i=1;i<=maxi-max(len2+1,len3);i++)
        printf(" ");
    for(i=1;i<=max(len2+1,len3);i++)
        printf("-");
    printf("\n");
    for(i=1;i<=maxi-len3;i++)
        printf(" ");
    printf("%s\n\n",ans);

}

void showmul(char num1[502],char num2[502],char ans[1004])
{   int len1,len2,lent,len3,i,j,k,maxi;
    char temp[504];
    len2=strlen(num2);
    len1=strlen(num1);

    mul(num1,num2[len2-1],ans);
    for(i=1;i<len2;i++)
    {
        mul(num1,num2[len2-i-1],temp);
        lent=strlen(temp);
        for(j=0;j<i;j++)
            temp[j+lent]='0';
        temp[i+lent]='\0';
        add(ans,temp,ans);
    }
    len3=strlen(ans);
    i=0;
    while(ans[i]=='0')
        i++;
    if(i==len3)
    {   ans[0]='0';
        ans[1]='\0';
        len3=1;}



    maxi=max(max(len1,len2+1),len3);
    for(i=1;i<=maxi-len1;i++)
        printf(" ");
    printf("%s\n",num1);
    for(i=1;i<=maxi-len2-1;i++)
        printf(" ");
    printf("*%s\n",num2);

    mul(num1,num2[len2-1],temp);
    lent=strlen(temp);


    for(i=1;i<=maxi-max(len2+1,lent);i++)
        printf(" ");
    for(i=1;i<=max(len2+1,lent);i++)
        printf("-");
     printf("\n");
    for(i=1;i<=maxi-lent;i++)
        printf(" ");
    printf("%s\n",temp);
if(len2>1)
{

    for(i=1;i<len2;i++)
    {
         mul(num1,num2[len2-i-1],temp);
        lent=strlen(temp);
        for(k=1;k<=maxi-(lent+i);k++)
            printf(" ");
        printf("%s",temp);
        for(j=0;j<i;j++)
            printf(" ");
            printf("\n");
            }

    for(j=0;j<maxi-max(lent+i-1,len3);j++)
        printf(" ");
    for(j=0;j<max(lent+i-1,len3);j++)
        printf("-");
    printf("\n");
    for(j=0;j<maxi-len3;j++)
        printf(" ");
    printf("%s\n\n",ans);
}
}
int main()
{   int t,i,k;
    char s[1002];

    char num1[502],num2[502];
    char sign;
    scanf("%d",&t);
    while(t--)
    { char ans[1004];
    ans[0]='\0';
     scanf("%s",&s);
     for(i=0;s[i]!='\0';i++)
     {
         if(s[i]!='+'&& s[i]!='-' && s[i]!='*')
            num1[i]=s[i];
         else
            {   sign=s[i];
                break;}
     }
     num1[i]='\0';
     k=0;
     while(s[++i]!='\0')
     {
         num2[k]=s[i];
         k++;
     }
     num2[k]='\0';

   // printf("%s\n%s\n",num1,num2);


     if(sign=='+')
         showadd(num1,num2,ans);
     else if(sign=='-')
         showsub(num1,num2,ans);
     else
        showmul(num1,num2,ans);


}
    return 0;
}
