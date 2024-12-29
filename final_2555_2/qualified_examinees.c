#include<stdio.h>
struct employee{
    char id[6];
    double score;
}typedef name;
void main(){
    int n;
    scanf("%d",&n);
    name emp[n];
    double sum=0;
    for(int i=0;i<n;i++){
        scanf("%s",emp[i].id);
        scanf("%lf",&emp[i].score);
        sum+=emp[i].score;
    }
    double avg=sum/n;
    //printf("%f",avg);
    /*for(int i=0;i<n;i++){
        printf("%s ",emp[i].id);
        printf("%.0f\n",emp[i].score);
    }*/
    int count=0;
    for(int i=0;i<n;i++){
        if(emp[i].score>=avg){
            count++;
        }
    }
    printf("%d\n",count);
    for(int i=0;i<n;i++){
        if(emp[i].score>=avg){
            printf("%s\n",emp[i].id);
        }
    }
}

