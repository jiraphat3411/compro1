#include<stdio.h>
void main(){
    int i=0,n=8,sum_even=0,sum_odd=0;
    while(i<n){
        int x;
        scanf("%d",&x);
        if(x%2==0){
            sum_even+=x;
        }else{
            sum_odd+=x;
        }
        i++;
    }
    if(sum_even==sum_odd){
        printf("equal\n");
    }else if(sum_even<sum_odd){
        printf("odd\n");
    }else{
        printf("even\n");
    }
    printf("%d\n%d", sum_even, sum_odd);
}
