#include<stdio.h>
#include<string.h>

int main(){
    char letters[100];
    char srettel[100];
    int num;
    scanf("%s", letters);
    strcpy(srettel,strrev(letters));
    for (int j = 0; j < strlen(srettel); j++)
    {
        num = (int)(srettel[j])+0;
       if (num != 97 && num != 101 && num != 105 && num != 111 && num != 117)
       {
            printf("%c",srettel[j]);
       }
       else if (num == 97)
       {
            printf("0");
       }
       else if (num == 101)
       {
            printf("1");
       }
       else if (num == 105)
       {
            printf("2");
       }
       else if (num == 111)
       {
            printf("3");
       }
       else if (num == 117)
       {
            printf("4");
       }    
    }
    printf("aca");
    return 0;
}