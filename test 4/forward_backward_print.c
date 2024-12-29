#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int m;
    scanf("%d",&m);
    if(m>0){
        for(int i=0;i<n;i++){
            printf("%d ",x[i]+m);
        }
    }else{
        for(int i=n-1;i>=0;i--){
            printf("%d ",x[i]+m);
        }
    }
}
