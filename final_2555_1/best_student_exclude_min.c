#include<stdio.h>
struct student{
    char id[11];
    int score[10];
};
void main(){
    int n,t;
    scanf("%d%d",&n,&t);
    struct student std[n];
    int max=0;
    for(int i=0;i<n;i++){
        scanf("%s",std[i].id);
        int sum=0,min=9999;
        for(int j=0;j<t;j++){
            scanf("%d",&std[i].score[j]);
            sum+=std[i].score[j];
            if(std[i].score[j]<min){
                min=std[i].score[j];
            }
        }
        sum-=min;
        if(sum>max){
            max=sum;
        }
    }
    printf("%d\n",max);
    for(int i=0;i<n;i++){
        int sum=0,min=9999;
        for(int j=0;j<t;j++){
            sum+=std[i].score[j];
            if(std[i].score[j]<min){
                min=std[i].score[j];
            }
        }
        sum-=min;
        if(sum==max){
            printf("%s\n",std[i].id);
        }
    }
}
