#include<stdio.h>
#include<stack>
using namespace std;
int main()
{

int n;
scanf("%d",&n);
while(n!=0)
{
    stack<int> s;
    int v=1;
    int arr[n+1];
    for(int i=0;i<n;i++)
       {

        scanf("%d",&arr[i]);
        if(arr[i]!=v)
            s.push(arr[i]);
        else{
            v++;
            while(!s.empty() && s.top()==v)
            {
                v++;
                s.pop();
            }
        }
//printf("%d %d\n",s.top(),v);

       }
if(s.empty())
    printf("yes\n");
else
    printf("no\n");

    scanf("%d",&n);
}

return 0;}
