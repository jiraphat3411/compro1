#include<stdio.h>
void main(){
    int sum=0;
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        sum+=x[i];
    }
    int average=sum/n;
    int m=0,l=0,e=0;
    //printf("%d",average);
    for(int i=0;i<n;i++){
        if(x[i]>average){
            m++;
        }else if(x[i]<average){
            l++;
        }else{
            e++;
        }
    }
    printf("%d\n%d %d %d",average,m,l,e);
}
