#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    int x1=1,y1=x/2,x2=x,y2=0;
    for(int i=0;i<x/2;i++){
        for(int j=0;j<y1;j++){
            printf(" ");
        }
        y1-=1;
        for(int j=0;j<x1;j++){
            printf("*");
        }
        x1+=2;
        printf("\n");
    }

    for(int i=0;i<x/2+1;i++){
        for(int j=0;j<y2;j++){
            printf(" ");
        }
        y2++;
        for(int j=0;j<x2;j++){
            printf("*");
        }
        x2-=2;
        printf("\n");
    }
}
