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
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=a)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}