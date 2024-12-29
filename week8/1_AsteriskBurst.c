#include<stdio.h>
void main(){
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=0;i<x;i++){
        printf("*");
        for(int i=0;i<y-2;i++){
            printf("*");
        }
        printf("*\n");
    }
}
