#include<stdio.h>
void main(){
    double result=0,sum=0;
    int count=0;
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    for(int i=0;i<n;i++){
        if(x<=a[i]&&a[i]<=y){
            count++;
            sum+=a[i];
        }
    }
    result=sum/count;
    if(count==0){
        printf("%d\nnone",count);
    }else{
        printf("%d\n%.2f",count,result);
    }
}
