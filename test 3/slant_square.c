#include<stdio.h>
void main(){
    int n,s=0;
    scanf("%d",&n);
    for(int i=0;i<n/3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<s;k++){
            printf(" ");
            }
            s+=1;
            if(s==3){
                s=0;
            }
            printf("* ");
            for(int k=0;k<n/3-1;k++){
                printf(" * ");
            }
            printf("\n");
        }

    }
}
