#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i+=k){
        printf("%d ",x[i]);
    }
}
