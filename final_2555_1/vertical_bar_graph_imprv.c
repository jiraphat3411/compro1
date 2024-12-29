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
    int m=max;
    for(int i=0;i<max;i++){
        for(int j=0;j<n;j++){
            if(m%10==0){
                if(arr[j]>=max){
                    printf("0");
                }else{
                    printf(" ");
                    arr[j]++;
                }
            }else if(m%10==5){
                if(arr[j]>=max){
                    printf("5");
                }else{
                    printf(" ");
                    arr[j]++;
                }
            }else{
                if(arr[j]>=max){
                    printf("*");
                }else{
                    printf(" ");
                    arr[j]++;
                }
            }
        }
        printf("\n");
        m--;
    }
}
