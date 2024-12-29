#include<stdio.h>
void main(){
    int x,y,count1=0,count2=0,sum1=0,sum2=0;
    while(1){
        scanf("%d",&x);
        if(x==0){
            break;
        }
        scanf("%d",&y);
        if(x==1){
            count1++;
            sum1+=y;
        }else{
            count2++;
            sum2+=y;
        }
    }
    printf("%d %d\n%d %d %d",count1,count2,sum1,sum2,sum1-sum2);
}
