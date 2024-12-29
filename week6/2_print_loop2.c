#include<stdio.h>
void main(){
    int n,i=0;
    scanf("%d",&n);
    if(n<=i){
        printf("Invalid input");
    }else{
        while(n>i){
            i++;
            printf("%d\n",i);
        }
    }
}
