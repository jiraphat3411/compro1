#include<stdio.h>
#include<limits.h>
void main(){
    int min=INT_MAX,max=INT_MIN;
    while(1){
        int x;
        scanf("%d",&x);
        if(x<=0){
            break;
        }
        if(x%2!=0){
            if(x<min){
                min=x;
            }
            if(x>max){
                max=x;
            }
        }
    }
    printf("%d\n%d\n%d",max,min,max-min);
}
