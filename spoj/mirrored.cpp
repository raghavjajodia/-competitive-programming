#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
printf("Ready\n");
gets(str);
while(strcmp(str,"  "))
{

    if(!strcmp(str,"pq")||!strcmp(str,"qp")||!strcmp(str,"bd")||!strcmp(str,"db"))
        printf("Mirrored pair\n");
    else
        printf("Ordinary pair\n");
    gets(str);

}

return 0;
}
