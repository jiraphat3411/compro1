#include<stdio.h>
#include<limits.h>
void main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n][k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }*/
    int max=INT_MIN;
    int result=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<k;j++){
            sum+=arr[i][j];
        }
        if(sum>max){
            max=sum;
            result=i;
        }
    }
    //printf("%d",max);
    int maxi[k];
    for(int i=0;i<n;i++){
        maxi[i]=0;
    }
    for(int j=0;j<k;j++){
        for(int i=0;i<n;i++){
            if(arr[i][j]>maxi[j]){
                maxi[j]=arr[i][j];
            }
        }
    }
    int count=0;
    for(int j=0;j<k;j++){
        if(arr[result][j]==maxi[j]){
            count++;
        }
    }
    printf("%d\n%d",max,count);
}
/*
#include<stdio.h>
struct student{
    int score[5];
};
void main(){
    int n,k;
    scanf("%d%d",&n,&k);
    struct student stu[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            scanf("%d",&stu[i].score[j]);
        }
    }
    int max=0;
    int result=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<k;j++){
            sum+=stu[i].score[j];
        }
        if(sum>max){
            max=sum;
            result=i;
        }
    }
    int maxi[k];
    for(int i=0;i<n;i++){
        maxi[i]=0;
    }
    for(int j=0;j<k;j++){
        for(int i=0;i<n;i++){
            if(stu[i].score[j]>maxi[j]){
                maxi[j]=stu[i].score[j];
            }
        }
    }
    int count=0;
    for(int j=0;j<k;j++){
        if(stu[result].score[j]==maxi[j]){
            count++;
        }
    }
    printf("%d\n%d",max,count);
}
*/
