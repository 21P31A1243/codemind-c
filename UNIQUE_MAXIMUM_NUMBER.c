#include<stdio.h>
int max(int *a,int n)
{
    int max=a[0],i;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;
}
int main()
{
    int n,c=0,k=0;
    scanf("%d",&n);
    int a[n],i,j,b[n];
    b[0]=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] &&i!=j)
            {c++;
            break;}
        }
        if(c==0)
        b[k++]=a[i];
    }
    if(b[0]==0)
    {
        printf("-1");
        return 0;
    }
    printf("%d",max(b,k));
}