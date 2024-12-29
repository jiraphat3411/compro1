#include<stdio.h>
void main(){
    int k,n,x,sum=0;
    scanf("%d%d",&k,&n);
    int k2=k*100;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        sum+=x;
        printf("%d\n",(sum+k2-1)/k2);
    }
}
