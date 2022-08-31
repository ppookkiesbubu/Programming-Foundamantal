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

// 1.a = 0
// 2.i = 1
// 3.ทำซ้ำโดยเพิ่มค่า i เมื่อ i <= 1
//     1.j=1
//     2.ทำซ้ำโดยเพิ่มค่า j เมื่อ j < i 
//         1.ถ้า a > i 
//             1.หยุดการทำซ้ำ
//         2.ถ้า i%j == 0
//             1.a = a + j
//     3.ถ้า a == i 
//         1.แสดงผล P(i) = a
//     4.ถ้า i == 1
//         1.แสดงผล P(1) = 1
//     5.ถ้าไม่เข้ากรณีใดเลย
//         1.a = 0