#include<stdio.h>

struct student{
    int score[5];
};

void main(){
    int n,k,maxsum=0,target=0;
    scanf("%d%d",&n,&k);
    struct student stu[n];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<k;j++){
            scanf("%d",&stu[i].score[j]);
            sum+=stu[i].score[j];
        }
        if(sum>maxsum){
            maxsum=sum;
            target=i;
        }
    }
    printf("%d\n",maxsum);

    int maxQ[k];
    for(int i=0;i<k;i++){
        maxQ[i]=0;
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            if(stu[j].score[i]>maxQ[i]){
                maxQ[i]=stu[j].score[i];
            }
        }
    }
    /*for(int i=0;i<k;i++){
        printf("%d ",maxQ[i]);
    }*/
    int count=0;
    for(int i=0;i<k;i++){
        if(maxQ[i]==stu[target].score[i]){
            count++;
        }
    }
    printf("%d\n",count);
}
