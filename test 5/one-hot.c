#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++){
            arr[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr[i][x]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
