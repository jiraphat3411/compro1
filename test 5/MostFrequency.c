#include<stdio.h>
#include<limits.h>
void main(){
    int arr[1000][2];
    int count=0;
    for(int i=0;;i++){
        int x;
        scanf("%d",&x);
        if(x<=0){
            break;
        }
        count++;
        arr[i][0]=x;
        arr[i][1]=1;
    }
    /*for(int i=0;i<count;i++){
        printf("%d ",arr[i]);
    }*/
    for(int i=0;i<count;i++){
        for(int j=i+1;j<count;j++){
            if(arr[i][0]==arr[j][0]){
                arr[j][0]=0;
                arr[i][1]++;
            }
        }
    }
    /*for(int i=0;i<count;i++){
        printf("%d ",arr[i][0]);
        printf("%d\n",arr[i][1]);
    }*/
    int max=INT_MIN;
    for(int i=0;i<count;i++){
        if(arr[i][1]>max&&arr[i][0]!=0){
            max=arr[i][1];
        }
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++){
        if(arr[i][1]==max&&arr[i][0]!=0){
            printf("%d ",arr[i][0]);
        }
    }
}
