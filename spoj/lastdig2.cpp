#include<stdio.h>
#include<string.h>
int c(char t[20])
{for(int i=0;t[i]!='\0';i++)
if(t[i]!='0')return 0;return 1;}
int main()
{char a[1005],b[20],x,y,z,w;int t,l1,l2;scanf("%d",&t);
while(t--)
{scanf("%s %s",&a,&b);
l1=strlen(a);
l2=strlen(b);
if(c(a) && c(b))
printf("0");
else if(c(b))
printf("1");
else
{x=a[l1-1];
w=x-48;
y=b[l2-1]-48;
z=(b[l2-2]-48)*10+y;
if(x=='0'||x=='1'||x=='5'||x=='6')
printf("%c",x);
else if (x=='4' || x=='9')
{if(y%2==0)
printf("%d",58-x);
else
printf("%c",x);}
else
if(z%4==2)
printf("%d",w*w%10);
else if(z%4==0)
printf("%d",w*w*w*w%10);
else if(z%4==1)
printf("%c",x);
else
printf("%d",58-x);}printf("\n");}return 0;}
