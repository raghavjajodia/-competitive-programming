#include<stdio.h>
#include<string.h>
int main()
{

int t;
scanf("%d",&t);
while(t--)
{
    char a[103];
    char b[103];
    scanf(" %[^\n]s",a);
    scanf(" %[^\n]s",b);
 //   printf("%s %s",a,b);
    int alpha1[27]={0};
    int alpha2[27]={0};
    int alpha3[27]={0};
    int l1=strlen(a);
    int l2=strlen(b);
    for(int i=0;i<l1;i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
        {
            if(a[i]<='Z')
                alpha1[a[i]-64]++;
            else
                alpha1[a[i]-96]++;

        }

    }
    for(int i=0;i<l2;i++)
    {
        if((b[i]>='a'&&b[i]<='z')||(b[i]>='A'&&b[i]<='Z'))
        {
            if(b[i]<='Z')
                alpha2[b[i]-64]++;
            else
                alpha2[b[i]-96]++;

        }

    }
//    for(int i=1;i<=26;i++)
//        printf("%d ",alpha1[i]);
//    printf("\n");
//    for(int i=1;i<=26;i++)
//        printf("%d ",alpha2[i]);
//    printf("\n");
    bool flag=true;
    for(int i=1;i<=26;i++)
    {
        if(alpha1[i]!=alpha2[i])
        {
            flag=false;
            break;
        }

    }
    if(flag==true)
        printf("YES\n");
    else{
            int count=0;
            int key=0;
        for(int i=1;i<=26;i++)
        {
            alpha3[i]=(alpha1[i]>alpha2[i]?alpha1[i]-alpha2[i]:alpha2[i]-alpha1[i]);
           // printf("%d ",alpha3[i]);
            if(alpha3[i]&1)
            {count++;
            key=i;}

        }

//        printf("\n");
//        printf("%d %d",count,key);
    if(count<=1)
    {
        char palin[102];
        bool test=true;
        int k=0;
       for(int i=1;i<=26;i++)
       {

           for(int j=1;j<=alpha3[i]/2;j++)
           {
               palin[k++]=i+96;
           }
}
if(key!=0)
    palin[k++]=key+96;
int i;
if(key==0)
    i=k-1;
else
    i=k-2;
for(;i>=0;i--)
    palin[k++]=palin[i];

palin[k]='\0';
printf("%s\n",palin);
    }
    else
        printf("NO LUCK\n");

}

}
return 0;
}
