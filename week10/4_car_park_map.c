#include<stdio.h>
void main(){
    int r,c;
    scanf("%d%d",&r,&c);
    char a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][j]='_';
        }
    }
    int n;
    scanf("%d",&n);
    int x,y;
    for(int i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        a[x-1][y-1]='x';
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }

}
