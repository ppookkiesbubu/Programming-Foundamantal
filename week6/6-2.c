#include<stdio.h>
#include<string.h>

int main(){
    char *p,str[100];
    int cap = 0,small = 0;
    scanf("%s",str);
    p = str;
    for (int i = 0; i < strlen(str); i++)
    {
        if (*(p+i)-32 >= 'A' && *(p+i) - 32 <= 'Z')
        {
            small = small + 1;
        }
        else if (*(p+i)+32 >= 'a' && *(p+i) + 32 <= 'z')
        {
            cap = cap + 1;
        }
    }
    printf("Capital letters : %d\nSmall letters : %d",cap,small);
    return 0;
}