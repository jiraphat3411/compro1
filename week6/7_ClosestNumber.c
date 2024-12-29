#include<stdio.h>
#include<limits.h>
void main(){
    int x,i=0,min=INT_MAX,newy=0;
    scanf("%d",&x);
    while(i<8){
        int y;
        scanf("%d",&y);
        int s=x-y;
        if(s<0){
            s=s*-1;
        }
        if(s<min){
            min=s;
            newy=y;
        }
        i++;
    }
    printf("%d",newy);
}
