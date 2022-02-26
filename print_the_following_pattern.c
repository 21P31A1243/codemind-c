#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n,k=1;j>=1,k<=n;j--,k++)
        {
            if(i==j||i==k)
            printf("x");
            else
            printf("0");
        }
        printf("
");
    }
}