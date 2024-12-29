#include<stdio.h>
int x[8];
double average(double sum){
    double average=sum/8;
    //printf("average = %.2f\n",average);
    return average;
}
double variance(double average){
    double variance,sum=0;
    for(int i=0; i<8; i++){
        //printf("x[%d] = %.2f\n",i,x[i]);
        //printf("average = %.2f\n",average);
        sum += (x[i]-average)*(x[i]-average);
        //printf("sum = %.2f\n",sum);
    }
    variance = sum/7.0;
    //printf("sum = %.2f\n",sum);
    //printf("variance = %.2f\n",variance);
    return variance;
}
void main(){
    double sum=0;
    for(int i=0;i<8;i++){
        scanf("%d",&x[i]);
        sum+=x[i];
    }
    //printf("sum = %.2f\n",sum);
    double ave=average(sum);
    double var=variance(ave);
    printf("%.2f %.2f",ave,var);
}
