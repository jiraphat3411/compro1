#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf("*");
    }
    printf("\n");
    //line 1
    printf("*");
    for(int i=0;i<x-2;i++){
        printf(" ");
        }
    printf("*\n");
    //line 2
    for(int i=0;i<x-4;i++){
        printf("* ");
        for(int j=0;j<x-4;j++){
            printf("*");
        }
        printf(" *\n");
    }
    //line 3-x-2
    printf("*");
    for(int i=0;i<x-2;i++){
        printf(" ");
        }
    printf("*\n");
    //line x-1
    for(int i=0;i<x;i++){
        printf("*");
    }
    printf("\n");
    //line x
}
