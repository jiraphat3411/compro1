#include<stdio.h>
void main(){
    int x,y,m,n,sumx=0,sumy=0;
    scanf("%d%d%d%d",&x,&y,&m,&n);
    sumx=(m*2)+(n*1);
    sumy=(m*6)+(n*4);
    if(sumx<=x&&sumy<=y){
        printf("Yes ");
        printf("%d %d",x-sumx,y-sumy);
    }else if(sumx>x&&sumy>y){
            printf("No ");
            printf("%d %d",sumx-x,sumy-y);
    }else if(sumx<=x&&sumy>y){
            printf("No ");
            printf("0 %d",sumy-y);
    }else if(sumx>x&&sumy<=y){
            printf("No ");
            printf("%d 0",sumx-x);
    }
}
