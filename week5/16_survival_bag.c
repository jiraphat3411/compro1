#include<stdio.h>
void main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x/3<=y/4&&x/3<=z/2){
        printf("%d ",x/3);
        printf("%d ",x%3);
        printf("%d ",y-(x/3)*4);
        printf("%d",z-(x/3)*2);
    }else if(y/4<x/3&&y/4<=z/2){
        printf("%d ",y/4);
        printf("%d ",x-(y/4)*3);
        printf("%d ",y%4);
        printf("%d",z-(y/4)*2);
    }else if(z/2<x/3&&z/2<y/4){
        printf("%d ",z/2);
        printf("%d ",x-(z/2)*3);
        printf("%d ",y-(z/2)*4);
        printf("%d",z%2);
    }
}
