#include<stdio.h>
#include<limits.h>
int countmax(int x[],int n){
    int max=INT_MIN,count=0;
    for(int i=0;i<n;i++){
        if(x[i]>max){
            max=x[i];
        }
    }
    for(int i=0;i<n;i++){
        if(x[i]==max){
            count++;
        }
    }
    return count;
}
void main(){
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int max=countmax(x,n);
    printf("%d",max);
}
