#include<stdio.h>
int main()
{

int ne;
scanf("%d",&ne);
int n[3];
int p[3];
p[0]=1;
p[1]=1;
p[2]=1;
for(int i=1;i<ne;i++)
{
    n[0]=p[0]+p[1];
    n[1]=p[0]+p[1]+p[2];
    n[2]=p[1]+p[2];
    p[0]=n[0];
    p[1]=n[1];
    p[2]=n[2];
}
printf("%d",p[0]+p[1]+p[2]);
return 0;
}
