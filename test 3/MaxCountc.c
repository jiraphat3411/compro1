#include<stdio.h>
#include<limits.h>
void main(){
    int k,n,x,max=INT_MIN,count=0,result=0;
    scanf("%d%d",&k,&n);
    for(int i=0;i<n;i++){
        while(1){
            scanf("%d",&x);
            if(x==0){
                break;
            }
            if(x%k==0&&x>0){
                count++;
            }
        }
        if(count>=max){
            max=count;
            result=i+1;
        }
        count=0;
    }
    printf("%d %d",result,max);
}
