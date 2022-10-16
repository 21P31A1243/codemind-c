#include<stdio.h>
int main()
{
    int n,a,b,max,count=0;
    scanf("%d",&n);
    int arr[n],i,arr1[100],j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
          if(arr[i]<a || arr[i]>b)
          {
              arr1[j++]=arr[i];
              count++;
          }
    }
    max=arr1[0];
    for(j=0;j<n;j++)
    {
          if(arr1[j]>max)
          {
              max=arr1[j];
          }
    }
    if(count>0)
    {
      printf("%d",max);
    }
    else
    {
        printf("-1");
    }
    
}