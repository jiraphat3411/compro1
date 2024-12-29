#include<stdio.h>
void main(){
    int k,x,count=0,sum=0,mul=0;
    scanf("%d",&k);
    for(;;){
        scanf("%d",&x);
        count++;
        if(x==0){
            count--;
            break;
        }
        if(x%k==0&&x>0){
            sum+=x;
            mul++;
        }
    }
    printf("%d\n",count);
    printf("%d\n",mul);
    printf("%d\n",sum);
}
