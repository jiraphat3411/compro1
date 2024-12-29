#include<stdio.h>
void main(){
    int n,x,count=0;
    float sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x<=0){
            printf("Not positive\n");
            break;
        }
        sum+=x;
        count++;
    }
    printf("%.4f",sum/count);
}
