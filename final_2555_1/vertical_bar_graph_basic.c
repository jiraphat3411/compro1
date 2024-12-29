#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int max=0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<max;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>=max){
                printf("*");
            }else{
                printf(" ");
                arr[j]++;
            }
        }
        printf("\n");
    }
}
