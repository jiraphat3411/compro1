#include<stdio.h>
void main(){
    int x;
    while(1){
        scanf("%d",&x);
        if(x<=0){
            break;
        }
        for(int i=0;i<1;i++){
            for(int i=0;i<x-1;i++){
                printf("*");
            }
            printf("*\n");
        }
    }

}
