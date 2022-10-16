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
    for(i=0;i<n/2;i++)
    {
        sum=sum+arr[i];
    }
    for(i=(n/2);i<n;i++)
    {
        count=count+arr[i];
    }
    printf("%d
",sum);
    printf("%d
",count);
}