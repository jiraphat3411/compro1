#include<stdio.h>
#include<limits.h>
void main(){
    int x,y=0,count=1,resultx=0,resultcount=INT_MIN;
    scanf("%d",&x);
    resultx=x;
    while(1){
        if(x==0){
            break;
        }
        if(x==y){
            count++;
            if(count>resultcount){
                resultx=x;
                resultcount=count;
            }
        }else{
            count=1;
        }
        y=x;
        scanf("%d",&x);
    }
    if(resultcount==INT_MIN){
        resultcount=1;
    }
    printf("%d\n%d",resultcount,resultx);
}
