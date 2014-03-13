#include<stdio.h>
#include<math.h>

int arr[10];

void computeb(int a,int b)
{int i;
    for(i=a/10+1;i<b/10;i++)
        arr[i]+=10;



    if(b/10!=a/10)
    {
    for(i=0;i<=9;i++)
    arr[i]+=(b/10-a/10-1);

    arr[a/10]+=10-a%10;
    for(i=a%10;i<=9;i++)
        arr[i]++;

    arr[b/10]+=b%10+1;
    for(i=0;i<=b%10;i++)
        arr[i]++;
    }
    else
    {
        arr[a/10]+=b%10-a%10+1;
        for(i=a%10;i<=b%10;i++)
            arr[i]+=1;
    }
}

void computea(int a,int b)
{int i;
    if(a/100==b/100)
    {
        computeb(a%100,b%100);
        arr[a/100]+=(b%100-a%100+1);
            }
    else{
        arr[a/100]+=100-a%100;
        for(i=0;i<=9;i++)
            arr[i]+=10-((a/10)%10)-1;
        for(i=((a/10)%10)+1;i<=9;i++)
            arr[i]+=10;
        arr[(a/10)%10]+=10-a%10;
        for(i=a%10;i<=9;i++)
            arr[i]+=1;


        for(i=a/100+1;i<=b/100-1;i++)
            arr[i]+=100;
        for(i=0;i<=9;i++)
            arr[i]+=20*(b/100-a/100-1);


        arr[b/100]+=b%100+1;
        for(i=0;i<=9;i++)
            arr[i]+=((b/10)%10);
        for(i=0;i<=((b/10)%10)-1;i++)
            arr[i]+=10;
        arr[(b/10)%10]+=b%10+1;
        for(i=0;i<=b%10;i++)
            arr[i]+=1;
    }
}



int main()
{   int j=1;
    int temp;
    int a,b,i,len1,len2;
    scanf("%d",&a);
    while(a!=0)
    {   scanf("%d",&b);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
        for(i=0;i<10;i++)
            arr[i]=0;
        len1=(int)log10(a)+1;
        len2=(int)log10(b)+1;
        if(len1==3 && len2==3)
            computea(a,b);
        else if(len1==2 && len2==2)
            computeb(a,b);
        else if(len1==1 && len2==1)
        {
            for(i=a;i<=b;i++)
                arr[i]+=1;
        }
        else if(len1==1 && len2==2)
        {   for(i=a;i<=9;i++)
            arr[i]+=1;
            computeb(10,b);}
        else if(len1==2 && len2==3)
        {
            computeb(a,99);
            computea(100,b);
        }
        else
        {
            for(i=a;i<=9;i++)
                arr[i]++;

            computeb(10,99);

            computea(100,b);

        }

        printf("Case %d: 0:%d 1:%d 2:%d 3:%d 4:%d 5:%d 6:%d 7:%d 8:%d 9:%d\n",j,arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
       j++;
       scanf("%d",&a);
    }

    return 0;
}
