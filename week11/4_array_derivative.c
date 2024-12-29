#include<stdio.h>
void derivative(int x[],int n){
    printf("0 ");
    for(int i=1;i<n;i++){
        printf("%d ",x[i]-x[i-1]);
    }
}
void main(){
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    derivative(x,n);
}
