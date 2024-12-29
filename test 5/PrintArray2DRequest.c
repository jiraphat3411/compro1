#include<stdio.h>
#include<limits.h>
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
    int r,c;
    scanf("%d%d",&r,&c);
    int count=0;
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<n;i+=r){
        for(int j=0;j<n;j+=c){
            printf("%d ",arr[i][j]);
            count++;
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
        printf("\n");
    }
    printf("%d\n",count);
    printf("%d\n%d",max,min);
}
