#include<stdio.h>
void main(){
    int i=0,n,x,y,z;
    scanf("%d",&n);
    while(i<n){
        scanf("%d%d%d",&x,&y,&z);
        if(x==y&&y==z){
            printf("xyz\n");
        }else if(x==y){
            printf("xy\n");
        }else if(y==z){
            printf("yz\n");
        }else if(x==z){
            printf("xz\n");
        }else if(x>y&&x>z){
            printf("x\n");
        }else if(y>x&&y>z){
            printf("y\n");
        }else if(z>x&&z>y){
            printf("z\n");
        }
        i++;
    }
}
