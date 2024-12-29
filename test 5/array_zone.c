#include<stdio.h>
void main(){
    int sum1=0,sum2=0,sum3=0,sum4=0;
    int r,c;
    scanf("%d%d",&r,&c);
    int x[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(int i=0;i<r/2;i++){
        for(int j=0;j<c/2;j++){
            //printf("%d ",x[i][j]);
            sum1+=x[i][j];
        }
        //printf("\n");
    }
    printf("%d ",sum1);
    for(int i=0;i<r/2;i++){
        for(int j=c/2;j<c;j++){
            //printf("%d ",x[i][j]);
            sum2+=x[i][j];
        }
        //printf("\n");
    }
    printf("%d\n",sum2);
    for(int i=r/2;i<r;i++){
        for(int j=0;j<c/2;j++){
            //printf("%d ",x[i][j]);
            sum3+=x[i][j];
        }
        //printf("\n");
    }
    printf("%d ",sum3);
    for(int i=r/2;i<r;i++){
        for(int j=c/2;j<c;j++){
            //printf("%d ",x[i][j]);
            sum4+=x[i][j];
        }
        //printf("\n");
    }
    printf("%d\n",sum4);
}
