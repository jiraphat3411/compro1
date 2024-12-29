#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int x=0,y=n*2;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<(n*2)+1;j++){
            if(j==x||j==y){
                printf("%d",i);
            }else{
                printf(" ");
            }
        }
        x++;
        y--;
        printf("\n");
    }
}
