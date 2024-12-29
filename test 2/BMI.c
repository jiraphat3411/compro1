#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int Un=0,No=0,Ov=0,Ob=0;
    float sum_un=0,sum_no=0,sum_ov=0,sum_ob=0;
    for(int i=0;i<n;i++){
        float w=0,h=0;
        float sum=0;
        scanf("%f%f",&w,&h);
        sum=w/((h/100)*(h/100));
        //printf("%f %f %f\n",sum,w,h);
        if(sum<18.5){
            Un++;
            sum_un+=w;
        }else if(sum<24.9){
            No++;
            sum_no+=w;
        }else if(sum<29.9){
            Ov++;
            sum_ov+=w;
        }else{
            Ob++;
            sum_ob+=w;
        }
    }
    /*printf("%f\n",sum_un);
    printf("%f\n",sum_no);
    printf("%f\n",sum_ov);
    printf("%f\n",sum_ob);*/
    printf("Underweight %d %.2f %.2f%%\n",Un,sum_un/Un,(float)Un/n*100);
    printf("Normal weight %d %.2f %.2f%%\n",No,sum_no/No,(float)No/n*100);
    printf("Overweight %d %.2f %.2f%%\n",Ov,sum_ov/Ov,(float)Ov/n*100);
    printf("Obesity %d %.2f %.2f%%\n",Ob,sum_ob/Ob,(float)Ob/n*100);
}
