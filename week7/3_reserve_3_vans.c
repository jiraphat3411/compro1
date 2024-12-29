#include<stdio.h>
void main(){
    int n,t,a=0,b=0,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        if(a<=b&&a<=c){
            a+=t;
            printf("A\n");
        }else if(b<=c){
            b+=t;
            printf("B\n");
        }else{
            c+=t;
            printf("C\n");
        }
    }
}
