#include<stdio.h>
void main(){
    int n;
    int min=0,max=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        if(m<x[i]){
            min+=x[i];
        }else if(m>x[i]){
            max+=x[i];
        }
    }
    if(min<max){
        printf("%d",max);
    }else{
        printf("%d",min);
    }
}
