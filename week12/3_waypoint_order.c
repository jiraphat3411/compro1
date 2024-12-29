#include<stdio.h>
void main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]=0;
        }
    }
    int n;
    scanf("%d",&n);
    int x,y;
    for(int i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        arr[x-1][y-1]=i+1;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
