#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int x[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&x[i][j]);
        }
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }*/
    int k;
    scanf("%d",&k);
    if(k==1){
        for(int i=0;i<n;i++){
            for(int j=n/2;j<n;j++){
                printf("%d ",x[i][j]);
            }
            for(int j=0;j<n/2;j++){
                printf("%d ",x[i][j]);
            }
            printf("\n");
        }
    }else if(k==2){
        for(int i=n/2;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",x[i][j]);
            }
            printf("\n");
        }
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n;j++){
                printf("%d ",x[i][j]);
            }
            printf("\n");
        }
    }
}
