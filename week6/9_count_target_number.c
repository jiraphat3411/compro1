#include<stdio.h>
void main(){
    int x,y,count=0;
    scanf("%d",&x);
    while(1){
        scanf("%d",&y);
        if(y==0){
            break;
        }
        if(x==y){
            count++;
        }
    }
    if(count==0){
        printf("None");
    }else{
        printf("%d",count);
    }
}
