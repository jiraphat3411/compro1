#include<stdio.h>
void main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    /*for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }*/
    int max=0;
    for(int i=k;i<n-k;i++){
        int sum=0;
        for(int j=i-k;j<=i+k;j++){
            //printf("%d ",arr[j]);
            sum+=arr[j];
        }
        //printf("\n");
        if(sum>max){
            max=sum;
        }
    }
    printf("%d",max);
}
