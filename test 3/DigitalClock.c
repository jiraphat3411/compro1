#include<stdio.h>
void main(){
    int s1,s2,e1,e2;
    scanf("%d%d%d%d",&s1,&s2,&e1,&e2);
    if(s1==e1){
        for(int i=s1;i<=s1;i++){
            for(int j=s2;j<=e2;j++){
                printf("%d:%.2d\n",i,j);
            }
        }
    }else{
        for(int i=s1;i<=s1;i++){
            for(int j=s2;j<60;j++){
                printf("%d:%.2d\n",i,j);
            }
        }

        for(int i=s1+1;i<e1;i++){
            for(int j=0;j<60;j++){
                printf("%d:%.2d\n",i,j);
            }
        }

        for(int i=e1;i<=e1;i++){
            for(int j=0;j<=e2;j++){
                printf("%d:%.2d\n",i,j);
            }
        }
    }

}
