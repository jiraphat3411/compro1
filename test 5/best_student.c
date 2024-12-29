#include<stdio.h>
struct student{
    char id[9];
    char name[31];
    char surname[61];
    float grades;
};
void main(){
    int n;
    scanf("%d",&n);
    struct student stu[n];
    for(int i=0;i<n;i++){
        scanf("%s",stu[i].id);
        scanf("%s",stu[i].name);
        scanf("%s",stu[i].surname);
        scanf("%f",&stu[i].grades);
    }
    /*for(int i=0;i<n;i++){
        printf("%s ",stu[i].id);
        printf("%s ",stu[i].name);
        printf("%s ",stu[i].surname);
        printf("%.2f\n",stu[i].grades);
    }*/
    float max=0;
    int target=0;
    for(int i=0;i<n;i++){
        if(stu[i].grades>max){
            max=stu[i].grades;
            target=i;
            //printf("%f ",max);
        }
    }
    printf("%s ",stu[target].id);
    printf("%s ",stu[target].name);
    printf("%s ",stu[target].surname);
    printf("%.2f\n",stu[target].grades);
}
