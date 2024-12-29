#include<stdio.h>
void main(){
    int n,x;
    scanf("%d",&n);
    int max=0,min=11;
    int sum=0;
    if(n==3){
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            sum+=x;
        }
    }else{
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            sum+=x;
            if(x>max){
                max=x;
            }
            if(x<min){
                min=x;
            }
        }
        sum=sum-min-max;
    }
    printf("%d",sum);
}
