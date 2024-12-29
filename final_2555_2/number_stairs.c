#include<stdio.h>
int n[501];
void main(){
    int count=0;
    while(1){
        scanf("%d",&n[count]);
        if(n[count]<0||n[count]>9){
            break;
        }
        count++;
    }
    /*for(int i=0;i<count;i++){
        printf("%d ",n[i]);
    }*/
    int s=count-1;
    for(int i=0;i<count;i++){
        for(int j=0;j<s;j++){
            printf(" ");
        }
        for(int j=0;j<count-s;j++){
            printf("%d",n[i]);
        }
        s--;
        printf("\n");
    }
}
