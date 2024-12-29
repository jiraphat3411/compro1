#include<stdio.h>

double average(double sum,int n){
    double average=sum/n;
    //printf("average = %.2f\n",average);
    return average;
}
double variance(double average,int n,int x[]){
    double variance,sum=0;
    for(int i=0; i<n; i++){
        //printf("x[%d] = %.2f\n",i,x[i]);
        //printf("average = %.2f\n",average);
        sum += (x[i]-average)*(x[i]-average);
        //printf("sum = %.2f\n",sum);
    }
    variance = sum/(n-1);
    //printf("sum = %.2f\n",sum);
    //printf("variance = %.2f\n",variance);
    return variance;
}
void main(){
    int n;
    scanf("%d",&n);
    int x[n];
    double sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        sum+=x[i];
    }
    //printf("sum = %.2f\n",sum);
    double ave=average(sum,n);
    double var=variance(ave,n,x);
    printf("%.2f %.2f",ave,var);
}
