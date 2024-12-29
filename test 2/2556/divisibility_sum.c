#include<stdio.h>
void main(){
    int x,y,z,sumx=0,sumy=0,sumxy=0;
    scanf("%d%d",&x,&y);
    while(1){
        scanf("%d",&z);
        if(z<=0){
            break;
        }
        if(z%x==0&&z%y!=0){
            sumx+=z;
        }
        if(z%y==0&&z%x!=0){
            sumy+=z;
        }
        if(z%y==0||z%x==0){
            sumxy+=z;
        }
    }
    printf("%d\n%d\n%d",sumx,sumy,sumxy);
}
