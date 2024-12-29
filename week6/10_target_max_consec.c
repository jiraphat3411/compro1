#include<stdio.h>
#include<limits.h>
void main(){
    int x,y,count=0,next=0,max=INT_MIN;
    scanf("%d",&x);
    while(1){
        scanf("%d",&y);
        if(y==0){
            break;
        }
        if(x==y){
            count++;
            next++;
            if(next>max){
                max=next;
            }
        }else{
            next=0;
        }
    }
    if(max==INT_MIN){
        max=0;
    }
    printf("%d\n%d",max,count);
}
