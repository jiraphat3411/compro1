#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int x=n,y=n;
    for(int i=0;i<n;i++){
        printf("%d ",i%10);
    }
    printf("\n");
    for(int i=0;i<n-2;i++){
        for(int i=0;i<x-2;i++){
            printf("  ");
        }
        printf("%d\n",y%10);
        x--;
        y++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",y%10);
        y++;
    }
}
