#include<stdio.h>
int isPrime(int p){
    int prime=1;
    for (int i = 2; i < p; i++){
        if (p%i != 0){
            prime = 1;
        }
        else{
            prime = 0;
            break;
        }   
    }
    return prime;
}
int main(){
    int x;
    scanf("%d",&x);
    if (isPrime(x) == 1){
        printf("Prime Number.");
    }
    else{
        printf("Not Prime Number");
    }
    return 0;
}