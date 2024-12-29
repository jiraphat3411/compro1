#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    char arr[n+1];
    for(int i=0;i<n+1;i++){
        //arr[i]='0';
        scanf("%c",&arr[i]);
    }
    int count=0;
    while(1){

    }
    for(int i=1;i<n+1;i++){
        printf("%c",arr[i]);
    }
}
