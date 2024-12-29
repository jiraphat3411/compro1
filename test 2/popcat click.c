#include<stdio.h>
void main(){
    int n,x,th=0,ta=0,ma=0,fi=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x==1){
            th++;
        }else if(x==2){
            ta++;
        }else if(x==3){
            ma++;
        }else if(x==4){
            fi++;
        }
    }
    if(th>ta&&th>ma&&th>fi){
        printf("Thailand won with a score of %d",th);
    }else if(ta>th&&ta>ma&&ta>fi){
        printf("Taiwan won with a score of %d",ta);
    }else if(ma>th&&ma>ta&&ma>fi){
        printf("Malaysia won with a score of %d",ma);
    }else{
        printf("Finland won with a score of %d",fi);
    }
}
