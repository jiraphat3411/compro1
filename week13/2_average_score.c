#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    double sum=0;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        sum+=x;
    }
    printf("%f",sum/n);
}
