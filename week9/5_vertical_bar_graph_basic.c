#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    /*for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n%d",max);*/
    for(int i=0;i<max;i++){
        for(int j=0;j<n;j++){
            if(arr[j]-max>=0){
                printf("*");
            }else{
                printf(" ");
                arr[j]++;
            }
        }
        printf("\n");
    }
}
