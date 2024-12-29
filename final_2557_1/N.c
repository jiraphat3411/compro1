#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    /*char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]='0';
        }
    }
    int num=1;
    for(int i=0;i<1;i++){
        for(int j=n-1;j>=0;j--){
            arr[j][i]=num%10;
            num++;
        }
    }
    for(;;){
        for(;;){

        }
    }
    for(int i=n-1;i<n;i++){
        for(int j=n-1;j>=0;j--){
            arr[j][i]=num%10;
            num++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }*/
    int x=n,y=n+1,z=n+(n-1)+(n-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0){
                printf("%d ",x%10);
                x--;
            }else if(i==j){
                printf("%d ",y%10);
                y++;
            }else if(j==n-1){
                printf("%d\n",z%10);
                z--;
            }else{
                printf("  ");
            }
        }
    }
}
