#include<stdio.h>

int main(){
    int a,b,c;
    printf("Input three number : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>a+c && a+b>b+c)
    {
        printf("%d %d",a,b);
    }
    else if (a+c>a+b && a+c>b+c)
    {
        printf("%d %d",a,c);
    }
    else if (b+c>a+b && b+c>a+c)
    {
        printf("%d %d",b,c);
    } 
    else if (a+b == a+c && b+c == b+a)
    {
        printf("All Three Numbers are equal.");
    }
    else if (a+b == a+c && a>b )
    {
        printf("%d %d",a,b);
    }
    else if (b+a == b+c && b>a)
    {
        printf("%d %d",b,a);
    }
    else if (c+a == c+b && c>a)
    {
        printf("%d %d",c,a);
    }
    return 0;
}