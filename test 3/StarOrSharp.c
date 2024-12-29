#include<stdio.h>
void main(){
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x%2==0){
            for(int j=0;j<x;j++){
                printf("#");
            }
            printf("\n");
        }else{
            for(int j=0;j<x;j++){
                printf("*");
            }
            printf("\n");
        }

    }
}
