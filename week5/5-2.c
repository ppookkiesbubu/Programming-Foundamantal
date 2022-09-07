#include<stdio.h>

int maxx(int x,int y){
    if (x-y>0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if (maxx(a,b) == 1)
    {
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    
    return 0;
}