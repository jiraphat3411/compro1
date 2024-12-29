#include<stdio.h>
void main(){
    int x,y,z,temp=0,count=0;
    scanf("%d%d",&x,&y);
    if(x>y){
        temp=y;
        y=x;
        x=temp;
    }
    while(1){
        scanf("%d",&z);
        if(z<0){
            break;
        }
        if(x<z&&z<y||x==z||z==y){
            count++;
        }
    }
    printf("%d",count);
}
