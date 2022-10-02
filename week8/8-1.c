//จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3)

#include<stdio.h>
#include<string.h>

int main() {
    char letters[1000];
    scanf("%s", letters);
    printf("%s",strrev(letters));
    
    return 0;
}