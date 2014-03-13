#include<stdio.h>

void sort(int arr[],int low,int mid,int high)
{
 int i,j,k,l,b[20];
 l=low;
 i=low;
 j=mid+1;
 while((l<=mid)&&(j<=high))
   {
    if(arr[l]<=arr[j])
      {
       b[i]=arr[l];
       l++;
      }
    else
      {
       b[i]=arr[j];
       j++;
      }
    i++;
   }
 if(l>mid)
   {
    for(k=j;k<=high;k++)
       {
        b[i]=arr[k];
        i++;
       }
   }
 else
   {
    for(k=l;k<=mid;k++)
       {
        b[i]=arr[k];
        i++;
       }
   }
 for(k=low;k<=high;k++)
    {
     arr[k]=b[k];
    }
}

void partition(int arr[],int low,int high)
{
 int mid;
 if(low<high)
   {
    mid=(low+high)/2;
    partition(arr,low,mid);
    partition(arr,mid+1,high);
    sort(arr,low,mid,high);
   }
}





//void sor(int arr[1002],int l)
//{
//    int i,j,temp;
//
//    for(i=0;i<l;i++)
//        for(j=0;j<l-i-1;j++)
//            if(arr[j]>arr[j+1])
//        {
//            temp=arr[j+1];
//            arr[j+1]=arr[j];
//            arr[j]=temp;
//        }
//
//}



int main()
{   int j,ans,n,t,i;
    int man[1002],woman[1002];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {   ans=0;
        scanf("%d",&n);
        for (j=0;j<n;j++)
        {
            scanf("%d",&man[j]);}
        for(j=0;j<n;j++)
        {
            scanf("%d",&woman[j]);
        }

            partition(man,0,n-1);
            partition(woman,0,n-1);

        for(j=0;j<n;j++)
        {
            ans+=man[j]*woman[j];
        }
        printf("%d\n",ans);

    }
    return 0;
}
