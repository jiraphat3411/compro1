#include<stdio.h>
#include<limits.h>
void main(){
    int n,k,x;
    scanf("%d%d",&n,&k);
    int y[n+1];
    for(int i=0;i<=n;i++){
        y[i]=0;
    }
    for(int i=0;i<k;i++){
        scanf("%d",&x);
        y[x]++;
    }
    /*for(int i=1;i<=n;i++){
        printf("%d ",y[i]);
    }*/
    int max=INT_MIN,result=0;
    for(int i=1;i<=n;i++){
        if(y[i]>max){
            max=y[i];
            result=i;
        }
    }
    printf("%d\n%d",result,max);
}
