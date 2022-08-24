#include<stdio.h>

int main(){
   int a=0;
   for (int i = 1; i <= 10000; i++){
        for (int j = 1; j < i; j++){
            if (a>i){
                break;
            }
            else if (i%j == 0){
            a += j;
            }
        }
        if (a==i){
            printf("P(%d) = %d \n",i,a);
            a = 0;
        }
         else if (i==1){
            printf("P(1) = 1 \n");
        }
        else{
            a = 0;
        }  
    }
    return 0;
}