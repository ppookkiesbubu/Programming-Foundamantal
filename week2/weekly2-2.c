#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i > 0; i++)
    {
         if (a == 2 || a == 3 || a == 5)
        {
            break;
        }
       
        if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a%7 == 0 )
        {
            scanf("%d", &a);
        }
        
        else{
            break;
        }
    }

    printf("%d", a);

    return 0;
}