#include<stdio.h>
int main(){
    int a[20],i,sum=0,index=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
label: sum+=a[index++];
       if(index < n){
           goto label;
       }
       printf("%d",sum);
}