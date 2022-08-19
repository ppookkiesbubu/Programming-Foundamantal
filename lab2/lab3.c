#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter number : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i==1 || i==n || j==1 || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }  
    return 0;
}
// 1.รับตัวเลขเก็บไว้ในตัวแปร n
// 2.i=1
// 3.ทำงานต่อไปนี้ซ้ำเมื่อ i<n 
//     1.j=1
//     2.ทำงานต่อไปนี้ซ้ำเมื่อ j<n 
//         1.ถ้า i==1 หรือ i==n หรือ j==1 หรือ j==n แสดงผล *
//         2.ถ้าไม่ใช่ แสดงผลช่องว่าง
//     3.แสดงผลnew line 