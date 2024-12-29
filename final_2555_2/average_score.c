#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    double x,sum=0;
    for(int i=0;i<n;i++){
        scanf("%lf",&x);
        sum+=x;
    }
    printf("%f",sum/n);
}
