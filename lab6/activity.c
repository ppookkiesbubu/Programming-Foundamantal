#include<stdio.h>           //65010600 ประทานพร
#include<string.h>

int main(){
    char *p,str[100];
    scanf("%s",str);
    p = str;
    for (int i = 0; i < strlen(str); i++)
    {
        if (*(p+i)>='a' && *(p+i)<='z')
        {
            printf("%c",*(p+i)-32);
        }
        else if (*(p+i)>='A' && *(p+i)<='Z')
        {
            printf("%c",*(p+i)+32);
        }   
    }
    return 0;
}