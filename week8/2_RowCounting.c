#include<stdio.h>
void main(){
    int r,c,x=0;
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++){
        x++;
        printf("%d ",x);
        for(int i=0;i<c-2;i++){
            x++;
            printf("%d ",x);
        }
        x++;
        printf("%d\n",x);
    }
}
