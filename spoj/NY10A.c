#include<stdio.h>
#include<string.h>
int main()
{   int arr[8];
    char st[5];
    char s[45];
    int t,i,data;
    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<8;i++)
            arr[i]=0;

        scanf("%d",&data);
        scanf("%s",&s);
        for(i=2;i<=39;i++)
      {     st[0]=s[i-2];
            st[1]=s[i-1];
            st[2]=s[i];
            st[3]='\0';
            if(!strcmp(st,"HHH"))
                arr[0]++;
            else if(!strcmp(st,"HHT"))
                arr[1]++;
            else if(!strcmp(st,"HTH"))
                arr[2]++;
            else if(!strcmp(st,"HTT"))
                arr[3]++;
            else if(!strcmp(st,"THH"))
                arr[4]++;
            else if(!strcmp(st,"THT"))
                arr[5]++;
            else if(!strcmp(st,"TTH"))
                arr[6]++;
            else
                arr[7]++;
          /*  for(i=0;i<8;i++)
                    printf("%d ",arr[i]);
            printf("\n");*/
        }

        printf("%d %d %d %d %d %d %d %d %d\n",data,arr[7],arr[6],arr[5],arr[4],arr[3],arr[2],arr[1],arr[0]);
    }
    return 0;
}
