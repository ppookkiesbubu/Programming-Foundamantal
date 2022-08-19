#include <stdio.h>

int main()
{
    int a,b,x;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    if (a>b)
    {
        x=b;
    }
    else{
        x=a;
    }
    while (a%x!=0 || b%x!=0)
    {
        x = x-1;
        
    }
    printf("Greatest common divisor = %d\nPress any key to continue... -",x);
    
    return 0;
}