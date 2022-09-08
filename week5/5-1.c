#include<stdio.h>
int max(int n,int p){
    if (n>p)
    {
        return n;
    }
    else{
        return p;
    }
}

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",max(x,y));
    return 0;
}
