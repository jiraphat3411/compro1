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
        int sum=0;
        for(int j=0;j<t;j++){
            scanf("%d",&std[i].score[j]);
            sum+=std[i].score[j];
        }
        if(sum>max){
            max=sum;
        }
    }
    /*for(int i=0;i<n;i++){
        printf("%s ",std[i].id);
        for(int j=0;j<t;j++){
            printf("%d ",std[i].score[j]);
        }
        printf("\n");
    }*/
    printf("%d\n",max);
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<t;j++){
            sum+=std[i].score[j];
        }
        if(sum==max){
            printf("%s\n",std[i].id);
        }
    }
}
