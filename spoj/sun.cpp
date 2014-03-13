#include<cstdio>
#include<cstring>
#define maxs 100001
using namespace std;
int main()
{int t;
scanf("%d",&t);
while(t--)
{
 int k,i=0;char str[maxs];char ch;
 scanf("%d",&k);scanf("%s",str);

  for(int i=0;str[i]!='\0';i++)
    {
     if(str[i]=='.')
        str[i]=' ';

     else
     {
         str[i]+=k%26;
     }


     else if(str[i]<='Z'&&str[i]>='A')
         { if(str[i]+k>'Z')
             str[i]=k-26+str[i];
           else
             str[i]+=k;
         }
        else
          {if(str[i]+k>'z')
             str[i]=k-26+str[i];
           else
             str[i]+=k;
           }
           i++;
           }








if(k>=0&&k<=25)
 {
    while(str[i]!='\0')
    {
     if(str[i]=='.')
        str[i]=' ';
     else if(str[i]<='Z'&&str[i]>='A')
         { if(str[i]+k>'Z')
             str[i]=k-26+str[i];
           else
             str[i]+=k;
         }
        else
          {if(str[i]+k>'z')
             str[i]=k-26+str[i];
           else
             str[i]+=k;
           }
           i++;
           }

      }

else
  {
    k=k%26;
    while(str[i]!='\0')
     {if(str[i]=='.')
        str[i]=' ';
      else if(str[i]<='Z'&&str[i]>='A')
         { if(str[i]+k>'Z')
             str[i]=k-26+str[i]+32;
           else
             str[i]=str[i]+k+32;
         }
         else
         {if(str[i]+k>'z')
            str[i]=k-58+str[i];
         else
            str[i]=str[i]+k-32;}

         i++;
      }
    }
    printf("%s\n",str);
	}
return 0;
}
