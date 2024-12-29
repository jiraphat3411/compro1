#include<stdio.h>
struct student {
    char id[9];
    char name[31];
    char surname[61];
    int year;
};
void main(){
    int n;
    scanf("%d",&n);
    struct student stu[n];
    for(int i=0;i<n;i++){
        scanf("%s",stu[i].id);
        scanf("%s",stu[i].name);
        scanf("%s",stu[i].surname);
        scanf("%d",&stu[i].year);
    }
    /*for(int i=0;i<n;i++){
        printf("%s ",stu[i].id);
        printf("%s ",stu[i].name);
        printf("%s ",stu[i].surname);
        printf("%d ",stu[i].year);
        printf("\n");
    }*/
    int k;
    scanf("%d",&k);
    int count=0;
    for(int i=0;i<n;i++){
        if(k==stu[i].year){
            printf("%s ",stu[i].id);
            printf("%s ",stu[i].name);
            printf("%s ",stu[i].surname);
            //printf("%d ",stu[i].year);
            printf("\n");
            count++;
        }
    }
    if(count==0){
        printf("None");
    }
}
