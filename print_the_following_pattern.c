#include<stdio.h>
int main()
{
    int n,i,j,ch;
    scanf("%d",&n);
    ch=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           
                printf("%d ",(ch-j+1));
        }
        printf("
");
    }
}