#include<stdio.h>
void main(){
    int x,revenue=0,expenses=0,countr=0,counte=0;
    for(;;){
        scanf("%d",&x);
        if(x==0){
            break;
        }else if(x<0){
            expenses+=x;
            counte++;
        }else if(x>0){
            revenue+=x;
            countr++;
        }
    }
    if(revenue>=expenses*-1){
        printf("%d %d\n%d\n%d\ndebit",countr,counte,revenue,expenses);
    }else{
        printf("%d %d\n%d\n%d\ncredit",countr,counte,revenue,expenses);
    }
}
