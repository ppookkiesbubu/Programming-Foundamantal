#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    while(a%2==0|| a%3==0 || a%5 == 0 || a%7 ==0)
    {
        scanf("%d",&a);
    }
        printf("Prime Number");
    
    return 0;
}