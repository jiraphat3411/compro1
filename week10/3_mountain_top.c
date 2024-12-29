#include<stdio.h>
void main(){
    int count=0,counttotal=0;
    int n;
    scanf("%d",&n);
    int x[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            //printf("%d %d\n",i,j);
            for(int k=i-1;k<=i+1;k++){
                for(int l=j-1;l<=j+1;l++){
                    //printf("%d ",x[k][l]);
                    if(x[i][j]>x[k][l]){
                        count++;
                    }
                }// 4
                //printf("\n");
            }// 3
            //printf("count = %d\nnewline\n",count);
            if(count==8){
                counttotal++;
            }
            count=0;
        }// 2
    }// 1
    printf("%d\n",counttotal);

    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            for(int k=i-1;k<=i+1;k++){
                for(int l=j-1;l<=j+1;l++){
                    if(x[i][j]>x[k][l]){
                        count++;
                    }
                }// 4
            }// 3
            if(count==8){
                printf("%d %d %d\n",x[i][j],i,j);
            }
            count=0;
        }// 2
    }// 1
}
