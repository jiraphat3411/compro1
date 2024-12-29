#include<stdio.h>
#include<limits.h>
void main(){
    int min,max,result=INT_MIN;
    for(;;){
        scanf("%d%d",&min,&max);
        if(min==0&&max==0){
            break;
        }
        if(max-min>result){
            result=max-min;
        }
    }
    printf("%d",result);
}
