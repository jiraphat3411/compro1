#include<stdio.h>
void main(){
    int x,y,temp=0;
    scanf("%d%d",&x,&y);
    if(x>y){
        temp=y;
        y=x;
        x=temp;
    }
    while(x<=y){
        if(x%4==0||x%7==0){
            printf("%d\n",x);
        }
    x++;
    }
}
