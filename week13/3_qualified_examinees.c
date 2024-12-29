#include<stdio.h>
struct empolyee{
    char name[6];
    int score;
} typedef emp;
void main(){
    int n;
    scanf("%d",&n);
    emp stu[n];
    double sum=0;
    for(int i=0;i<n;i++){
        scanf("%s",stu[i].name);
        scanf("%d",&stu[i].score);
        sum+=stu[i].score;
    }
    double result=sum/n;
    /*for(int i=0;i<n;i++){
        printf("%s ",stu[i].name);
        printf("%d ",stu[i].score);
        printf("\n");
    }*/
    int count=0;
    for(int i=0;i<n;i++){
        if(stu[i].score>=result){
            count++;
        }
    }
    printf("%d\n",count);
    for(int i=0;i<n;i++){
        if(stu[i].score>=result){
            printf("%s ",stu[i].name);
            //printf("%d ",stu[i].score);
            printf("\n");
        }
    }
}
