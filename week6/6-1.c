#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int cap=0,small=0;
    scanf("%s",str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            cap = cap+1;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            small = small+1;
        }   
    }
    printf("Capital letters : %d\nSmall letters : %d",cap,small);
    return 0;
}