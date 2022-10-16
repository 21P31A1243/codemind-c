#include<stdio.h>
int main()
{
    int n,s,c,v=1;
    scanf("%d%d%d",&n,&s,&c);
    v=2*n*s*c*512;
    printf("%dKB",v/1024);
}