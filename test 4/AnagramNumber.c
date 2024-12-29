#include<stdio.h>
void main(){
    int x[100],y[100];
    for(int i=0;i<=100;i++){
        x[i]=0;
        y[i]=0;
    }
    //int countx=0,county=0;
    while(1){
        int n;
        scanf("%d",&n);
        if(n<0||n>99){
            break;
        }
        //countx++;
        x[n]++;
        //printf("x[%d] = %d \n",n,x[n]);
    }
    //printf("\n");
    while(1){
        int n;
        scanf("%d",&n);
        if(n<0||n>99){
            break;
        }
        //county++;
        y[n]++;
        //printf("y[%d] = %d \n",n,y[n]);
    }
    int countdiffx=0,countdiffy=0;
    //int diffx[100],diffy[100]/*,countdiff=0*/;
    for(int i=0;i<100;i++){
        if(x[i]>0){
            //printf("x[%d] = %d ",i,x[i]);
            countdiffx++;
        }
    }
    //printf("\n");
    for(int i=0;i<100;i++){
        if(y[i]>0){
            //printf("y[%d] = %d ",i,y[i]);
            countdiffy++;
        }
    }
    //printf("\n");
    //printf("%d %d",countdiffx,countdiffy);
    /*for(int i=0;i<100;i++){
        if(x[i]==&y[i]){
            //countdiff++;
        }
    }*/
    //printf("%d",countdiff);
    if(countdiffx!=countdiffy){
        printf("A and B are not anagrams\nA %d\nB %d",countdiffx,countdiffy);
    }else{
        printf("A and B are anagrams\nA %d\nB %d",countdiffx,countdiffy);
    }
}
