#include<stdio.h>
int main()
{
    int n,a[100],i,max=0,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            if(a[j]==1)
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if(c>max)
        {
            max=c;
        }
    }
    printf("%d",max);
}