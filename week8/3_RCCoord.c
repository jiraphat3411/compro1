#include<stdio.h>
void main(){
    int r,c,x=0,y=0;
    scanf("%d%d",&r,&c);
    for(int i=0;i<=r;i++,x++){
        printf("(%d, %d) ",x,y);
        for(int i=0;i<=c-2;i++){
            y++;
            printf("(%d, %d) ",x,y);
        }
        y++;
        printf("(%d, %d)\n",x,y);
        y=0;
    }
}
