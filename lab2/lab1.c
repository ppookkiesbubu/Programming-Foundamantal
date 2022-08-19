#include <stdio.h>

int main(){
    int a;
    int b=2;
    scanf("%d",&a);
    while (a!=1)
    {
        while (a%b==0)
        {
            if(a/b == 1){
                printf("%d", b);
                return 0;
            }
            printf("%d x ",b);
            a = a/b;
        }
        b++;    
    }
    return 0;
}

// 1.รับตัวเลขเก็บไว้ในตัวแปร a
// 2.กำหนดค่า b=2
// 3.ทำงานต่อไปนี้ซ้ำ เมื่อ a!=1
//     1.ทำงานต่อไปนี้ซ้ำ เมื่อ a%b==0
//         1.ถ้า a/b!=1 แสดงผลค่า b x
//         2.ถ้าไม่ใช่ แสดงผลค่า b 
//         3.a=a/b
//     2.b++