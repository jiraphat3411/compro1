#include<stdio.h>
void main(){
    int x,y,z,temp=0,little=0,lot=0,between=0;
    scanf("%d%d",&x,&y);
    if(x>y){
        temp=y;
        y=x;
        x=temp;
    }
    while(1){
        scanf("%d",&z);
        if(z==0){
            break;
        }
        if(x<z&&z<y){
            between++;
        }else if(z<x&&z<y){
            little++;
        }else if(z>x&&z>y){
            lot++;
        }
    }
    printf("%d\n%d\n%d\n",between,little,lot);
}
