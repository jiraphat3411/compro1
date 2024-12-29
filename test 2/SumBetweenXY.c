#include<stdio.h>
void main(){
    int x,y,z,sum=0,temp=0;
    scanf("%d%d",&x,&y);
    if(x>y){
        temp=y;
        y=x;
        x=temp;
    }
    for(;;){
        scanf("%d",&z);
        if(z<=0){
            break;
        }
        if(x<=z&&z<=y){
            sum+=z;
        }
    }
    printf("%d",sum);
}
