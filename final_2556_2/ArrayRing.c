#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }*/
    int sum[(n+1)/2];
    for(int i=0;i<(n+1)/2;i++){
        sum[i]=0;
    }
    int x=n,y=0;
    for(int i=0;i<(n+1)/2;i++){
        for(int j=y;j<x;j++){
            for(int k=y;k<x;k++){
                sum[i]+=arr[j][k];
            }
        }
        x--;
        y++;
    }
    printf("%d\n",sum[((n+1)/2)-1]);
    for(int i=((n+1)/2)-1;i>0;i--){
        printf("%d\n",(sum[i]-sum[i-1])*-1);
    }

}
