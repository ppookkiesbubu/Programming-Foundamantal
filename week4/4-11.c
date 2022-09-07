#include<stdio.h>
int fac(int x){
    int n = 1;
    if (x > 0)
    {
        for (int i = 1; i <= x; i++)
        {
            n = n*i;
        }
        return n; 
    }
    else{
        return 0;
    }
      
}
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Factorial of %d is %d",a,fac(a));
    return 0;
}