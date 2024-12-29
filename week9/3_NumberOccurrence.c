#include<stdio.h>
void main(){
    int n,count=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int y;
    scanf("%d",&y);
    for(int i=0;i<n;i++){
        if(x[i]==y){
            printf("%d ",i+1);
            count++;
        }
    }
    if(count==0){
        printf("0");
    }
}
