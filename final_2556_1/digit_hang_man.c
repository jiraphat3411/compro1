#include<stdio.h>
void main(){
    int arr[12];
    for(int i=0;i<12;i++){
        scanf("%d",&arr[i]);
    }
    //
    int arr_try[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr_try[i]);
    }
    //
    for(int i=0;i<12;i++){
        printf("_ ");
    }
    printf("\n");
    //
    //int wrong[5];
    int a=1,count=0;
    for(int i=0;i<5;i++){
        int no=0;
        for(int j=0;j<12;j++){
            int yes=0;
            for(int k=0;k<a;k++){
                if(arr_try[k]==arr[j]){
                    printf("%d ",arr_try[k]);
                    yes=1;
                    no=1;
                }
                if(i==4){
                    if(arr_try[k]==arr[j]){
                        count++;
                    }
                }
            }//3
            if(yes==0){
                printf("_ ");
            }
        }//2
        a++;
        printf("\n");
    }//1
    printf("%d\n",count);
}
