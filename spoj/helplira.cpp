#include<stdio.h>
int main()
{
long long area=0;
long long maxx=0,minn=0;
int ansmax,ansmin;
int x1,x2,x3,y1,y2,y3;
int n;
scanf("%d",&n);
scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
area=x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2;
if(area<0)
    area=-area;
area=area/2;
maxx=area;
ansmax=1;
minn=area;
ansmin=1;

for(int i=1;i<n;i++){
scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
area=x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2;
if(area<0)
    area=-area;
area=area/2;

    if(area>=maxx){
        maxx=area;
        ansmax=i+1;}
    if(area<=minn){
        minn=area;
        ansmin=i+1;}



}
printf("%d %d",ansmin,ansmax);
return 0;}
