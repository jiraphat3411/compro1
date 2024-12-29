#include<stdio.h>
void main(){
    int x[100];
    for(int i=0;i<100;i++){
        x[i]=0;
    }
    int count=0;
    while(1){
        int n;
        scanf("%d",&n);
        if(n<=0){
            break;
        }
        count++;
        x[n]++;
    }
    int diffcount=0;
    for(int i=1;i<100;i++){
        if(x[i]>0){
            //printf("x[%d] = %d\n",i,x[i]);
            diffcount++;
        }
    }
    printf("%d\n%d\n",count,diffcount);
    /*for(int i=1;i<100;i++){
        if(x[i]>0){
            printf("%d ",i);
        }
    }*/
}
