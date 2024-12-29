#include<stdio.h>
void main(){
    int x,y,z,temp=0;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y){
        temp=y;
        y=x;
        x=temp;
    }
    for(int i=x;i<=y;i++){
        printf("%d: ",i);
        for(int j=0;j<z;j++){
            printf("%d ",i*(j+1));
        }
        printf("\n");
    }
}
