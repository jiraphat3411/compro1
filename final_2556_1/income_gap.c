#include<stdio.h>
#include<limits.h>
void main(){
    int n;
    scanf("%d",&n);
    int re_max=INT_MIN,re_min=INT_MAX;
    int arr[n][5];
    for(int i=0;i<n;i++){
        int max=INT_MIN,min=INT_MAX;
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
        int sum=max-min;
        if(sum>re_max){
            re_max=sum;
        }
        if(sum<re_min){
            re_min=sum;
        }
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }*/
    printf("%d ",re_max);
    printf("%d ",re_min);
    printf("%d\n",re_max-re_min);
}
