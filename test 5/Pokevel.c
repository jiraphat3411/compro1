#include<stdio.h>
struct {
 int code;
 char name[52];
 int level[9];
}typedef POKEMON;

void main(){
    int n,k;
    scanf("%d",&n);
    POKEMON mon[n];
    for(int i=0;i<n;++i) {
        scanf("%d",&mon[i].code);
        scanf("%s",mon[i].name);
        for(int v=1;v<=8;++v) {
            scanf("%d",&mon[i].level[v]);
        }
    }
    /*for(int i=0;i<n;++i) {
        printf("%d\n",mon[i].code);
        printf("%s\n",mon[i].name);
        for(int v=1;v<=8;++v) {
           printf("%d ",mon[i].level[v]);
        }
        printf("\n");
    }*/
    scanf("%d",&k);
    for(int i=0;i<k;++i) {
        int x,y;
        scanf("%d%d",&x,&y);
        for(int j=0;j<n;j++){
            if(mon[j].code==x){
                printf("%s ",mon[j].name);
                printf("%d\n",mon[j].level[y]);
            }
        }
    }
}
