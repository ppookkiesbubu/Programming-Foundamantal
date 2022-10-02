#include<stdio.h>
#include<string.h>

int main(){
    char letters[1000];
    scanf("%s", letters);
    for(int i = strlen(letters); i >= 0 ; i--)
    {
        printf("%c",letters[i]);
    }
    return 0;
}