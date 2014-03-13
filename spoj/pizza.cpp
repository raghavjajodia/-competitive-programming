#include<stdio.h>
int q(int n)
{
    if(n%4==0)
        return n/4;
    else
        return n/4+1;
}

int hq(int a,int b)
{
    if(b==2*a)
        return a;
    else if(b>2*a)
            return (a+q(b-2*a));
    else
    {
        if(b%2==0)
            return(b/2+(a-b/2)/2+(a-b/2)%2);
        else
            return((b-1)/2+1+(a-(b-1)/2)/2);
    }
    }


int main()
{
    int a,b,n,p=0,q=0,r=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d/%d",&a,&b);
        if(a==3 && b==4)
            p++;
        else if(a==1 && b==4)
            q++;
        else
            r++;
    }

    if(p>=q)
    {
            printf("%d",p+r/2+r%2+1);

    }
    else
        printf("%d",p+hq(r,q-p)+1);

    return 0;
}
