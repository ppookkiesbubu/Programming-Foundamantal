#include<stdio.h>

int main(){
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int j = 0; j < 9; j++)
    {
        if (num[j-1]%2!=0 && (num[j-1]-num[j+1])%2 == 0)
        {
            printf("%d ",num[j]);
        }
        
    }
    return 0;
}