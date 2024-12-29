#include<stdio.h>
#include<limits.h>
void main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[101];
    for(int i=0;i<101;i++){
        arr[i]=0;
    }

    for(int i=0;i<k;i++){
        int x;
        scanf("%d",&x);
        arr[x]++;
    }

    /*for(int i=0;i<k;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }*/

    int max=INT_MIN;
    for(int i=1;i<101;i++){
        if(arr[i]>max){
            max=arr[i];
            //printf("%d\n",max);
        }
    }

    for(int i=1;i<101;i++){
        if(arr[i]==max){
            printf("%d\n%d",i,max);
        }
    }
    //printf("%d\n%d",max,arr[max]);
}
