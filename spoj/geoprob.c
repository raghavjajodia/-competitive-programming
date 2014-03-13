#include<stdio.h>

void mul(char b[205],char ans[205])
{   int i,carry=0;
    if(b[0]<'5')
    {

        ans[strlen(b)]='\0';
   for(i=strlen(b)-1;i>=0;i--)
   {

       ans[i]=((((b[i]-48)*2)+carry)%10+48);
       carry=(((b[i]-48)*2)+carry)/10;
   }
    }
   else
   {
       for(i=strlen(b)-1;i>=0;i--)
   {

       ans[i+1]=((((b[i]-48)*2)+carry)%10+48);
       carry=((b[i]-48)*2)/10;
   }
   ans[0]=carry+48;
   ans[strlen(b)+1]='\0';
   }

}



void sub(char num1[205],char num2[205],char ans[205])
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


int main()
{
    int t;
    char a[205],b[205],c[205],ans[205];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s %s",&a,&b,&c);
        mul(b,ans);
        sub(ans,a,ans);
        sub(ans,c,ans);
        printf("%s\n",ans);
    }
    return 0;
}
