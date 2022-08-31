#include<stdio.h>

int main(){
    int a,b,c;
    printf("Input three number : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>c && b>c)
    {
        printf("%d %d",a,b);
    }
    else if (a>b && c>b)
    {
        printf("%d %d",a,c);
    }
    else if (b>a && c>a)
    {
        printf("%d %d",b,c);
    }
    return 0;
}