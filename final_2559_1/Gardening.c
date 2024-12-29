#include<stdio.h>
#include<limits.h>
void main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[m][n];
    int sum=0;
    int max=INT_MIN,min=INT_MAX;
    int re_min,re_max;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]<=10){
                sum+=arr[i][j]*40;
            }else{
                sum+=400;
            }
        }
    }
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=0;j<m;j++){
            temp+=arr[j][i];
        }
        if(temp>max){
            max=temp;
            re_max=i;
        }
        if(temp<min){
            min=temp;
            re_min=i;
        }
        //printf("%d ",re_max);
        //printf("%d\n",re_min);
    }
    /*for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }*/
    printf("%d\n",sum);
    printf("%d\n",re_max+1);
    printf("%d\n",re_min+1);
}
