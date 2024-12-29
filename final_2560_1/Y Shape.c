#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int x=0,y=n;
    for(int i=0;i<n/2;i++){
        if(n%2==0){
            for(int j=0;j<n+1;j++){
                if(j==x||j==y){
                    printf("%d",i);
                }else{
                    printf(" ");
                }
            }
            x++;
            y--;
            printf("\n");
        }else{
            for(int j=0;j<n;j++){
                if(j==x||j==y-1){
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
    int a=(n/2);
    //if(n%2==0){
    for(int i=0;i<(n+1)-(n/2);i++){
        for(int j=0;j<n+1;j++){
            if(j==n/2){
                printf("%d",a);
            }else{
                printf(" ");
            }
        }
        a++;
        printf("\n");
    }

    /*}else{
        for(int j=0;j<n+1;j++){
            if(j==n/2){
                printf("%d",a);
            }else{
                printf(" ");
            }
        }
        a++;
        printf("\n");
    }*/
}
