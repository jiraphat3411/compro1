#include<stdio.h>
void main(){
    int n,sum=0;
    scanf("%d",&n);
    int x[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&x[i][j]);
        }
    }
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(x[i][j]<x[j][i]){
                temp=x[j][i];
                x[j][i]=x[i][j];
                x[i][j]=temp;
            }
            sum+=x[i][j]-x[j][i];
        }
    }
    printf("%d ",sum);
}
