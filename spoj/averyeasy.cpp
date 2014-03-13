#include<stdio.h>
#include<math.h>
int fact(int n)
{ int a,b;
    if (n==1)
    printf("2(0)");
    else if(n==2)
        printf("2");
    else if(n==3)
        printf("2+2(0)");

    else
      {printf("2(");
        fact(floor(log(n)/log(2)));
        printf(")");
        if(n-pow(2,floor(log(n)/log(2)))!=0)
          {printf("+");
        fact(n-pow(2,floor(log(n)/log(2))));

        }

      }


return 0;
}


int main()
{
    int num,i;

    printf("137=");fact(137);printf("\n");
    printf("1315=");fact(1315);printf("\n");
    printf("73=");fact(73);printf("\n");
    printf("136=");fact(136);printf("\n");
    printf("255=");fact(255);printf("\n");
    printf("1384=");fact(1384);printf("\n");
    printf("16385=");fact(16385);printf("\n");

    return 0;

}
