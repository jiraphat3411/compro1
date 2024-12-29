#include<stdio.h>
void main(){
    int score;
    scanf("%d", &score);
    if(score < 40){
        printf("Fail");
    }else if (score < 80){
        printf("Pass");
    }else{
        printf("Excellent");
    }
}
