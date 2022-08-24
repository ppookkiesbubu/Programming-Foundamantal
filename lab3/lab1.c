#include<stdio.h>

int main(){
    int a,x=0;
    scanf("%d",&a);
    while (1)
    {
        if(a>0)
        {
            x += a%10;
            a = a/10;
        }
        else{
            if (x>9)
            {
                a = x;
                x = 0;
                printf("%d\n",a);
            }
            else{
                printf("%d",x);
                break;
            }
            
        }
        
    }
    
    return 0;
}