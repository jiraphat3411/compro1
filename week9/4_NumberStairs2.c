#include<stdio.h>
void main(){
    int x[500],count=0;
    for(int i=0;;i++){
        scanf("%d",&x[i]);
        if(x[i]<0||x[i]>9){
            break;
        }
        count++;
    }
    int temp=count-1;
    for(int i=0;i<count;i++){
        for(int j=0;j<temp;j++){
            printf(" ");
        }
        temp--;
        for(int j=-1;j<i;j++){
            printf("%d",x[i]);
        }
        printf("\n");
    }
}
