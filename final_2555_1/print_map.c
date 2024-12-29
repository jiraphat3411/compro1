#include<stdio.h>
void main(){
    int row,col;
    scanf("%d%d",&row,&col);
    char arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]='_';
        }
    }
    int n;
    scanf("%d",&n);
    int r,c;
    for(int i=0;i<n;i++){
        scanf("%d%d",&r,&c);
        arr[r-1][c-1]='x';
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
}
