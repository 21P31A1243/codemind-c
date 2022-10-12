#include<stdio.h>
int main(){
    int n;
scanf("%d",&n);
int arr[n],i;
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int sum=0;
for(i=0;i<n;i++){
    sum+=arr[i];
}
int avg=sum/n;
int flag=0;
for(i=0;i<n;i++){
    if(arr[i]==avg){
        flag=1;
        break;
    }
}
if(flag==1){
    printf("True");
}else{
    printf("False");
}
return 0;
}
