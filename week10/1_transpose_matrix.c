#include<stdio.h>
void main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int z[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&z[i][j]);
        }
    }
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            printf("%d ",z[j][i]);
        }
        printf("\n");
    }
}
