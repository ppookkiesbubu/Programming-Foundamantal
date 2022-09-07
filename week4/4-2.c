#include<stdio.h>
void AA(){
    printf("A");
}
void BB(){
    printf("B+");
}
void bb(){
    printf("B");
}
void CC(){
    printf("C+");
}
void cc(){
    printf("C");
}
void DD(){
    printf("D+");
}
void dd(){
    printf("D");
}
void FF(){
    printf("F");
}
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a+b+c>=80 && a+b+c<=100)
    {
        AA();
    }
    else if (a+b+c>=75 && a+b+c<=79)
    {
        BB();
    }
    else if (a+b+c>=70 && a+b+c<=74)
    {
        bb();
    }
    else if (a+b+c>=65 && a+b+c<=69)
    {
        CC();
    }
    else if (a+b+c>=60 && a+b+c<=64)
    {
        cc();
    }
    else if (a+b+c>=55 && a+b+c<=59)
    {
        DD();
    }
    else if (a+b+c>=50 && a+b+c<=54)
    {
        dd();
    }
    else
    {
        FF();
    } 
    return 0;
}