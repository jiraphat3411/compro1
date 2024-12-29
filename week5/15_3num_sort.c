#include<stdio.h>
void main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x<y&&x<z){
        if(y<z){
            printf("%d %d %d",x,y,z);
        }else{
            printf("%d %d %d",x,z,y);
        }
    }else if(y<x&&y<z){
        if(x<z){
            printf("%d %d %d",y,x,z);
        }else{
            printf("%d %d %d",y,z,x);
        }
    }else if(z<x&&z<y){
        if(x<y){
            printf("%d %d %d",z,x,y);
        }else{
            printf("%d %d %d",z,y,x);
        }
    }else if(x==y&&x<z){
        printf("%d %d %d",x,y,z);
    }else if(y==z&&y<x){
        printf("%d %d %d",y,z,x);
    }else if(x==z&&x<y){
        printf("%d %d %d",x,z,y);
    }else{
        printf("%d %d %d",x,y,z);
    }
}
    //if(x<y&&x<z&&y<z){
        //printf("%d %d %d",x,y,z);
    //}else if(x<y&&x<z&&z<y){
        //printf("%d %d %d",x,z,y);
    //}else if(y<x&&y<z&&x<z){
        //printf("%d %d %d",y,x,z);
    //}else if(y<x&&y<z&&z<x){
        //printf("%d %d %d",y,z,x);
    //}else if(z<x&&z<y&&x<y){
        //printf("%d %d %d",z,x,y);
    //}else if(z<x&&z<y&&y<x){
        //printf("%d %d %d",z,y,x);
    //}else if(x==y&&x<z){
        //printf("%d %d %d",x,y,z);
    //}else if(y==z&&y<x){
        //printf("%d %d %d",y,z,x);
    //}else if(x==z&&x<y){
        //printf("%d %d %d",x,z,y);
    //}else if(x==y||y==z||x==z){
        //printf("%d %d %d",x,y,z);
    //}
