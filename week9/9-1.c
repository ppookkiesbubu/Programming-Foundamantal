#include<stdio.h>
#include<string.h>

int main(){
    char letters[100];
    char srettel[100];
    scanf("%s",letters);
    strcpy(srettel,strrev(letters));
    for (int j = 0; j < strlen(srettel); j++)
    {
        if (srettel[j] != 'a'&&srettel[j] != 'e'&&srettel[j] != 'i'&&srettel[j] != 'o'&&srettel[j] != 'u')
        {
            printf("%c",srettel[j]);
        }
        else if (srettel[j] == 'a')
        {
            printf("0");
        }
        else if (srettel[j] == 'e')
        {
            printf("1");
        }
        else if (srettel[j] == 'i')
        {
            printf("2");
        }
        else if (srettel[j] == 'o')
        {
            printf("3");
        }
        else if (srettel[j] == 'u')
        {
            printf("4");
        }   
    }
    printf("aca");
    return 0;
}