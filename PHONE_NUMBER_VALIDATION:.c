#include<stdio.h>
int main(){
    long int n,i,count;
    scanf("%ld",&n);
    while(n<0){
        n/=10;
        count++;
    }
    if(count==10){
        printf("Valid");
    }else if(n/1000000000!=0){
        printf("Valid");
    }else{
        printf("Invalid");
    }
}