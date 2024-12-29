#include<stdio.h>
void main(){
    int x,count=0;
    while(1){
        scanf("%d",&x);
        if(x==0){
            break;
        }else{
            count++;
        }
    }
    printf("%d",count);
}
