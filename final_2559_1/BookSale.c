#include<stdio.h>
struct book{
    int id;
    char name[52];
    char surname[52];
    int sale;
    int base;
    int count;
}typedef BOOK;
void main(){
    int n;
    scanf("%d",&n);
    BOOK bk[n];
    for(int i=0;i<n;i++){
        scanf("%d",&bk[i].id);
        scanf("%s",bk[i].name);
        scanf("%s",bk[i].surname);
        scanf("%d",&bk[i].sale);
        scanf("%d",&bk[i].base);
        bk[i].count=0;
    }
    /*for(int i=0;i<n;i++){
        printf("%d\n",bk[i].id);
        printf("%s ",bk[i].name);
        printf("%s\n",bk[i].surname);
        printf("%d\n",bk[i].sale);
        printf("%d\n",bk[i].base);
        printf("%d\n",bk[i].count);
    }*/

    int p;
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        int x,id,z;
        scanf("%d%d",&x,&id);
        if(x==1){
            scanf("%d",&z);
            //int c1=0;
            for(int j=0;j<n;j++){
                if(id==bk[i].id){
                    bk[i].count+=z;
                    //c1=1;
                }
            }
            /*if(c1!=1){
                printf("Error\n");
            }*/
        }else{
            //int c2=0;
            for(int j=0;j<n;j++){
                if(id==bk[i].id){
                    printf("%d ",bk[i].id);
                    printf("%s ",bk[i].name);
                    printf("%s ",bk[i].surname);
                    printf("%d ",bk[i].count);
                    printf("%d ",bk[i].sale*bk[i].count);
                    printf("%d\n",bk[i].base*bk[i].count);
                    //c2=1;
                }
            }
            /*if(c2!=1){
                printf("Error\n");
            }*/
        }

    }
}
