#include<stdio.h>
#include<limits.h>
void main(){
    int sum=0,max=INT_MIN,min=INT_MAX;
    int n,imax=0,imin=0;
    int result=0,resum[1000];
    int count=0;
    while(1){
        scanf("%d",&n);
        int x[n];
        if(n<=0){
            break;
        }
        count++;
        for(int i=0;i<n;i++){
            scanf("%d",&x[i]);
        }
        for(int i=0;i<n;i++){
            sum+=x[i];
        }
        if(sum>max){
            max=sum;
            imax=count;
        }
        if(sum<min){
            min=sum;
            imin=count;
        }
        resum[count]=sum;
        //printf("%d\n",sum);
        result+=sum;
        sum=0;
    }//
    for(int i=1;i<=count;i++){
        printf("%d\n",resum[i]);
    }
    printf("%d %d\n%d %d\n",imax,max,imin,min);
    printf("%.2f\n",result/(double)count);
}
