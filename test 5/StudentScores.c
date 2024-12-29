#include<stdio.h>
void main(){
    int r,n;
    scanf("%d%d",&r,&n);
    int arr[n][r];
    int sum[r];
    double avg=0;
    for(int i=0;i<r;i++){
        sum[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr[i][j]);
            sum[j]+=arr[i][j];
        }
    }
    /*for(int i=0;i<r;i++){
        printf("%d ",sum[i]);
    }*/
    /*for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }*/
    for(int i=0;i<r;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[j][i]);
        }
        printf("%d",sum[i]);
        printf("\n");
        avg+=sum[i];
    }
    avg=avg/(r);
    printf("average = %.2f\n",avg);
    int count=0;
    for(int i=0;i<r;i++){
        if(sum[i]>=avg){
            count++;
        }
    }
    printf("pass %d\n",count);
    for(int i=0;i<r;i++){
        if(sum[i]>=avg){
            printf("%d ",i+1);
        }
    }
}
