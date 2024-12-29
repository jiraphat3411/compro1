#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    if(x==2){
        printf("%d is prime",x);
    }else if(x%2==0){
        printf("%d is not prime",x);
    }else if(x%3==0||x%7==0){
        printf("%d is not prime",x);
    }else{
        printf("%d is prime",x);
    }
}
