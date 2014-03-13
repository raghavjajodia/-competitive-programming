#include<stdio.h>
#include<string.h>
int main()
{
int t,tem;
scanf("%d",&t);
while(t--)
{   char arr1[6102];
    int temp1[6102]={0};
    int temp2[6102];
    scanf("%s",&arr1);
    int l=strlen(arr1);
//    for(int i=0;i<=l;i++)
//        temp1[i]=0;
    for(int j=1;j<=l;j++)
    {
        temp2[0]=0;
        for(int i=1;i<=l;i++)
        {
            temp2[i]=temp1[i];
            if(temp2[i-1]>temp2[i])
                temp2[i]=temp2[i-1];
            tem=temp1[i-1];
            if(arr1[i-1]==arr1[l-j])
            tem=tem+1;
            if(tem>temp2[i])
            temp2[i]=tem;
        }
//        for(int m=0;m<=l;m++)
//            printf("%d ",temp1[m]);
//        printf("\n");
//        for(int m=0;m<=l;m++)
//            printf("%d ",temp2[m]);
//        printf("\n");

        for(int k=0;k<=l;k++)
            temp1[k]=temp2[k];

        }
        printf("%d\n",l-temp1[l]);
    }


return 0;
}


