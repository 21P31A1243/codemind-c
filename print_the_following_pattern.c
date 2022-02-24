#include<stdio.h>
int main(){
    int r,c,n,num=1;
    scanf("%d",&n);
    for(r=n;r>=1;r--){
        for(c=1;c<=r;c++){
            printf("%d",c);
        }
        printf("
");
    }
}