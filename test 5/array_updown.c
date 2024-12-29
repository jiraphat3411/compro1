#include<stdio.h>
void main(){
    int sum1=0,sum2=0;
    int k;
    scanf("%d",&k);
    int x[k][k];
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            scanf("%d",&x[i][j]);
        }
    }
    /*for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }*/
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            //printf("%d ",x[i][j]);
            sum1+=x[i][j];
        }
        //printf("\n");
    }
    printf("%d\n",sum1);
    int temp=0;
    for(int i=0;i<k;i++){
        for(int j=i-1;j>=0;j--){
            //printf("%d ",x[i][j]);
            sum2+=x[i][j];
        }
        //printf("\n");
    }
    printf("%d\n",sum2);
}
