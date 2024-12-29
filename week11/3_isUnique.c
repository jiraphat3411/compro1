#include<stdio.h>
int isUnique(int x[],int n){
    int result=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(x[i]==x[j]){
                result=0;
                break;
            }
        }
    }
    return result;
}
void main(){
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int result=isUnique(x,n);
    /*int result=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(x[i]==x[j]){
                result=0;
                break;
            }
        }
    }*/
    printf("%d",result);
}
