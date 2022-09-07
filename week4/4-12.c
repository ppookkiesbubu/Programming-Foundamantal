#include<stdio.h>  
  
int fac(int x)  
{  
  if (x == 0)  
    return 1;  
  else  
    return(x * fac(x-1));  
}  
   
int main()  
{  
  int n;  
  int fact;  
  printf("Enter a number: ");  
  scanf("%d", &n);   
   
  fact = fac(n);  
  printf("Factorial of %d is %ld", n, fact);  
  return 0;  
}  