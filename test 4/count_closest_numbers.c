#include<stdio.h>
#include<limits.h>
void main(){
    int sum=0,min=INT_MAX;
    int n,count=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        sum=k-x[i];
        if(sum<0){
            sum*=-1;
        }
        if(sum<min){
            min=sum;
        }
        sum=0;
    }
    printf("%d",min);
    for(int i=0;i<n;i++){
        sum=k-x[i];
        if(sum<0){
            sum*=-1;
        }
        if(sum==min){
            count++;
        }
        sum=0;
    }
    printf("\n%d",count);
}
