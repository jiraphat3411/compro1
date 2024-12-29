#include<stdio.h>
void main(){
    int w,n;
    scanf("%d%d",&w,&n);
    for(int i=0;i<(w*n)+(n+1);i++){
        printf("*");
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("*");
        for(int j=0;j<w;j++){
            printf(" ");
        }
    }
    printf("*\n");
    for(int i=0;i<(w*n)+(n+1);i++){
        printf("*");
    }
    printf("\n");
}
