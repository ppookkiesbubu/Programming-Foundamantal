#include<stdio.h>
#include<Windows.h>
#include<conio.h>

void draw_ship(int x,int y){
     COORD c = { x,y};
    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE),c);
    printf("<-0->");
}
void erase_ship(int x,int y){
     COORD c = { x,y};
    SetConsoleCursorPosition(
    GetStdHandle(STD_OUTPUT_HANDLE),c);
    printf("     ");
}
int main(){
    char ch=' ';
    int x=38,y=20;
    draw_ship(x,y);
    do{
        if (_kbhit())
        {
            ch=_getch();
           if (x>=1 && x<=80)
           {
            if (ch=='a')
            {
                draw_ship(--x,y);
            }
            if (ch=='d')
            {
                draw_ship(++x,y);
            }
           }
           if (x>80)
           {
             if (ch=='a')
            {
                draw_ship(--x,y);
            }
           }
           if (x<1)
           {
            if (ch=='d')
            {
                draw_ship(++x,y);
            }
           }
           if (y>=1 && y<=10)
           {
            if (ch=='w')
            {
                draw_ship(x,++y);
                erase_ship(x,y);
            }
            if (ch=='s')
            {
                draw_ship(x,--y);
                erase_ship(x,y);
            }
           }
           if (y>10)
           {
             if (ch=='w')
            {
                draw_ship(x,++y);
                erase_ship(x,y);
            }
           }
           if (y<1)
           {
            if (ch=='s')
            {
                draw_ship(x,--y);
                erase_ship(x,y);
            }
           }
            fflush(stdin);    
        }
        Sleep(100);
    }
    while (ch !='x');
    return 0;
}
