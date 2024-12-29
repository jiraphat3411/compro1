#include<stdio.h>
#include<limits.h>
void main(){
    int x,i=0,min=INT_MAX,max=INT_MIN;
    while(i<8){
        scanf("%d",&x);
        if(x>0){
            if(x>max){
                max=x;
            }
            if(x<min){
                min=x;
            }
        }
        i++;
    }
    printf("%d\n%d",max,min);
}
