#include<stdio.h>
void main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    for(int i=b;i<=d;i++){
        printf("%d x %d = %d\n",a,i,a*i);
    }

    for(int i=a+1;i<c;i++){
        for(int j=1;j<=d;j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }
    }

    for(int i=1;i<=b;i++){
        printf("%d x %d = %d\n",c,i,c*i);
    }
}
