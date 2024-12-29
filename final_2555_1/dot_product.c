#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr_1[n];
    int arr_2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr_1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr_2[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr_1[i]*arr_2[i];
    }
    printf("%d",sum);
}
