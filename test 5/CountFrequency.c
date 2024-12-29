#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n][2];
    /*for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            arr[i][j]=0;
        }
    }*/
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i][0]);
        arr[i][1]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i][0]==arr[j][0]){
                arr[j][0]=0;
                arr[i][1]++;
            }
        }
    }
    /*for(int i=0;i<n;i++){
        printf("%d ",arr[i][0]);
        printf("%d\n",arr[i][1]);
    }*/
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i][0]!=0){
            count++;
        }
    }
    printf("%d\n",count);
    for(int i=0;i<n;i++){
        if(arr[i][0]!=0){
            printf("%d ",arr[i][0]);
            printf("%d\n",arr[i][1]);
        }
    }
}
