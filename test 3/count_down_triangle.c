#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    int sudox=x,sudo=0;
    for(int i=0;i<x;i++){
        for(int j=0;j<sudo;j++){
            printf(" ");
        }
        sudo++;
        for(int j=0;j<sudox;j++){
            if(x<10){
                printf("%d",sudox);
            }else{
                printf("%d",sudox%10);
            }
        }
        sudox--;
        printf("\n");
    }
}
