#include<stdio.h>
void main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x==y){
        printf("0");
    }else if(x>y){
        if(x==3&&y==1){
            printf("2");
        }else{
            printf("1");
        }
    }else{
        if(x==1&&y==3){
            printf("1");
        }else{
            printf("2");
        }
    }
}
