#include<stdio.h>
int main()
{
    int n,sum=0,count=0,a,b,min;
    scanf("%d",&n);
    int arr[n],i,arr1[100],j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            arr1[j++]=arr[i];
            sum++;
            count++;
        }
    }
    min=arr1[0];
    for(j=0;j<sum;j++)
    {
        if(arr1[j]<min)
        {
            min=arr1[j];
        }
    }
    if(count>0)
    {
       printf("%d",min);
    }
    else
    {
        printf("-1");
    }
}