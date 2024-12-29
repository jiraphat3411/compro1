#include<stdio.h>
void main(){
    int k,n,i=0,sumx=0;
    scanf("%d%d",&k,&n);
    int k2=k*100;
    while(i<n){
        int x;
        scanf("%d",&x);
        sumx+=x;
        printf("%d\n",(sumx+k2-1)/k2);
        i++;
    }
}
