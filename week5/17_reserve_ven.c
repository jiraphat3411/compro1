#include<stdio.h>
void main(){
    int a=0,b=0,c=0;
    int day1;
    scanf("%d",&day1);
    a+=day1;
    int day2;
    scanf("%d",&day2);
    if(a<=b&&a<=c&&b<=c){
        a+=day2;
    }else if(b<a&&b<=c){
        b+=day2;
    }else if(c<b&&c<a){
        c+=day2;
    }
    int day3;
    scanf("%d",&day3);
    if(a<=b&&a<=c&&b<=c){
        a+=day3;
    }else if(b<a&&b<=c){
        b+=day3;
    }else if(c<b&&c<a){
        c+=day3;
    }
    if(a<=b&&a<=c){
        printf("A");
    }else if(b<a&&b<=c){
        printf("B");
    }else if(c<b&&c<a){
        printf("C");
    }
}
