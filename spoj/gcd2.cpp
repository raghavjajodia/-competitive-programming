#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int remain(int a,char b[255] )
{
    int temp=0;
int siz=a,sizea=0;
while(siz)
{
    siz=siz/10;
    sizea++;
}


if(sizea==strlen(b))
    return (atoi(b)%a);
for(int i=0;i<strlen(b);i++)
{

    temp=temp*10+(b[i]-48);
    temp=temp%a;

}

return temp;

}

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}



int main()
{

int t,temp;
scanf("%d",&t);
while(t--)
{
int a;
int ans=0;
char b[255];
scanf("%d %s",&a,&b);
if(a==0)
{
    printf("%s\n",b);
}
else{
    temp=remain(a,b);
//    printf("%d\n",temp);
    ans=gcd(a,temp);
    printf("%d\n",ans);
}

}
return 0;}
