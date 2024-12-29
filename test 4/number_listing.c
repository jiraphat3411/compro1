#include<stdio.h>
void main(){
    int n,temp=0;
    scanf("%d",&n);
    int x[n],y[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }

    for(int j=0;j<n;j++){
        for(int i=1;i<n;i++){
            if(x[i]<x[i-1]){
                temp=x[i-1];
                x[i-1]=x[i];
                x[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(x[i]!=x[i-1]){
            printf("%d ",x[i]);
        }
    }
}
