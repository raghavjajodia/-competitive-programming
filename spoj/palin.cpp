#include<stdio.h>
int l;
char s[1000002];
void handle(int num)
{int i;
    while(s[num]=='9')
    {
        s[num]='0';
        num--;
    }
    if (num<0)
    {
        for(i=l;i>0;i--)

            s[i]=s[i-1];
        s[0]='1';
        l=l+1;
        s[l]='\0';
    }
    else
        s[num]=s[num]+1;

}

void cop(int num)
{
    while(num>=0)
    {
        s[l-num-1]=s[num];
        num--;
    }

}




int main()
{
int half;
int t,i,flag;
scanf("%d",&t);
while(t>0)
{flag=0;
scanf("%s",s);
//l=strlen(s);
l=0;
while(s[l]!='\0')
    l++;

for(i=l/2-1;i>=0;i--)
{
    if (s[i]>s[l-i-1])

   {
    cop(i);
    flag=1;
    break;}

else if (s[i]<s[l-i-1])
{
        if (l%2==1)
    {
           if(s[l/2]=='9')
            handle(l/2);


           else
            s[l/2]=s[l/2]+1;
            }

        else
            {
           if(s[l/2-1]=='9')
            handle(l/2-1);

           else
            s[l/2-1]=s[l/2-1]+1;
            }
    cop(l/2-1);
    flag=1;
    break;
    }
else
    continue;
}
if (flag==0)
{
    if(l%2==1)
    {
        if(s[l/2]=='9')
       {
        handle(l/2);
        cop((l/2)-1);}
        else
        s[l/2]=s[l/2]+1;

    }
    else
    {
        if(s[l/2-1]=='9')
           {handle(l/2-1);
           cop(l/2-1);}
        else
         {s[l/2-1]=s[l/2-1]+1;
         s[l/2]=s[l/2]+1;
        }
    }
}


printf("%s\n",s);
t--;
}

return 0;
}
