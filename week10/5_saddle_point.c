#include<stdio.h>
void main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int x[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
}
