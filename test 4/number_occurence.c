#include<stdio.h>
void main(){
    int n,count=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(k==x[i]){
            printf("%d ",i+1);
            count++;
        }
    }
    if(count==0){
        printf("0");
    }
}
