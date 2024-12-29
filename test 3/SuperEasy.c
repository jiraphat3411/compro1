#include<stdio.h>
void main(){
    int n,x,y,temp=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        if(x>y){
            temp=y;
            y=x;
            x=temp;
        }
        for(int j=x;j<=y;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
