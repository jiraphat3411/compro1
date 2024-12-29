#include<stdio.h>
void main(){
    int n,p;
    scanf("%d%d",&n,&p);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    /*for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }*/
    int max=0;
    for(int i=0+p;i<n-p;i++){
        int sum=0;
        for(int j=i-p;j<=i+p;j++){
            sum+=arr[j];
        }
        if(sum>max){
            max=sum;
        }
    }
    printf("%d\n",max);
}
