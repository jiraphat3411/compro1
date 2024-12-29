#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0,sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=0;
            }
        }
        if(arr[i]!=0){
            count++;
            sum+=arr[i];
        }
    }
    /*int count=0,sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            count++;
            sum+=arr[i];
        }
    }*/
    printf("%d\n%d",count,sum);
}
