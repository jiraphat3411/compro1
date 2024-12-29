#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=' ';
        }
    }
    for(int i=0;i<n;i++){
        arr[0][i]='*';
        arr[n-1][i]='*';
        arr[i][0]='*';
        arr[i][n-1]='*';
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<n;j++){
            arr[((n-5)/2)+i][j]='*';
            arr[j][((n-5)/2)+i]='*';
        }
    }
    int a=0;
    for(int i=1;i<n;i++){
        for(int j=a;j<3+a;j++){
            arr[i][j]='*';
        }
        a++;
    }
    int b=0;
    for(int i=n-2;i>0;i--){
        for(int j=b;j<3+b;j++){
            arr[i][j]='*';
        }
        b++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
}
