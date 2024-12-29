#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num_max=-1;
    int max=-1;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
            num_max=arr[i];
            max=count;
        }else if(count==max&&arr[i]>num_max){
            num_max=arr[i];
        }
    }
    printf("%d\n%d",num_max,max);
}
