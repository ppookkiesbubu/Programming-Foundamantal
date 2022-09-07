#include <stdio.h>

int main()
{
    int a, x = 0;
    scanf("%d", &a);
    while (1)
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                x = x + i;
            }
        }
        if (x == a + 1)
        {
            printf("%d is Prime Number .", a);
            break;
        }
        else
        {
            x = 0;
            scanf(" %d", &a);
        }
    }

    return 0;
}