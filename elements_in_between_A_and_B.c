#include<stdio.h>
int main()
{
    int n,sum=0,count=0,a,b,max=0;
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
        }
    }
    for(j=0;j<sum;j++)
    {
        printf("%d ",arr1[j]);
        count++;
    }
    if(count==0)
    {
        printf("-1");
    }
}