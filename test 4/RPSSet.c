#include<stdio.h>
void main(){
    int n;
    int xwin=0,ywin=0;
    scanf("%d",&n);
    int x[n],y[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&y[i]);
    }

    for(int i=0;i<n;i++){
        if(x[i]==1&&y[i]==3){
            xwin++;
        }else if(x[i]==3&&y[i]==1){
            ywin++;
        }else if(x[i]>y[i]){
            xwin++;
        }else if(x[i]<y[i]){
            ywin++;
        }
        //printf("%d %d\n",xwin,ywin);
    }

    printf("%d %d\n",xwin,ywin);
    if(xwin<ywin){
        printf("2");
    }else if(xwin>ywin){
        printf("1");
    }else{
        printf("0");
    }
}
    /*int n,xwin=0,ywin=0;
    scanf("%d",&n);
    int x[n],y[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&y[i]);
    }

    for(int i=0;i<n;i++){
        if(x[i]>y[i]){
            xwin++;
        }
        if(x[i]<y[i]){
            ywin++;
        }
    }

    printf(" %d %d\n",xwin,ywin);
    if(xwin<ywin){
        printf(" 2");
    }else if(xwin>ywin){
        printf(" 1");
    }else{
        printf(" 0");
    }*/
