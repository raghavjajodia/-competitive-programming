#include<stdio.h>
int main()
{
int c;
scanf("%d",&c);
while(c--)
{
    int n,m,t;
    scanf("%d %d %d",&n,&m,&t);
    if(n%m==0)
        printf("%d\n",((n/m)*t)<<1);
    else
        printf("%d\n",(((n/m)+1)*t)<<1);


}
return 0;
}


