#include<stdio.h>
void main(){
    int w,s,result=0;
    for(int i=0;i<7;i++){
        scanf("%d%d",&w,&s);
        if(w/250<=s/15){
            result=w/250;
        }else{
            result=s/15;
        }
        if(w-(result*250)>0){
            printf("%d water\n",result);
        }else{
            printf("%d\n",result);
        }
    }
}
