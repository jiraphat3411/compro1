#include<stdio.h>
void main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=1;j<c;j+=2){
                arr[i][j]+=k;
            }
        }else{
            for(int j=0;j<c;j+=2){
                arr[i][j]+=k;
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
