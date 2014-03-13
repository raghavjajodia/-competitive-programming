#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    for(i=0;i<99;i++)
        printf("%d\n",i);
    return 0;
}
/*int c(char t[20])
{
    for(int i=0;t[i]!='\0';i++)
if(t[i]!='0')return 0;return 1;}


int main()
{
    char a[1005],x,y,w;
    int t,l1;
    scanf("%d",&t);
    long long b;
    while(t--)
{scanf("%s %lld",&a,&b);
l1=strlen(a);
if(c(a) && b==0)
printf("0");
else if(b==0)
printf("1");
else
{x=a[l1-1];
w=x-48;
y=b%100;
if(x=='0'||x=='1'||x=='5'||x=='6')
printf("%c",x);
else if (x=='4' || x=='9')
{if(y%2==0)
printf("%d",58-x);
else
printf("%c",x);}
else
if(y%4==2)
printf("%d",w*w%10);
else if(z%4==0)
printf("%d",w*w*w*w%10);
else if(z%4==1)
printf("%c",x);
else
printf("%d",58-x);}printf("\n");}return 0;}
*/
