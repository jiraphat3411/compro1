#include<stdio.h>
void main(){
    int x,sum=0;
    while(1){
        scanf("%d",&x);
        if(x%10==0){
            break;
        }
        if(x%3==0||x%5==0){
            sum+=x;
        }
    }
    printf("%d",sum);
}
