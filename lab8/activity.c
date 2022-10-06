#include<stdio.h>
int main(){
    struct player
    {
        char name[50];
        int level;
        int score;
    };
    struct player p[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Name : ");
        scanf("%s",p[i].name);
        printf("Level : ");
        scanf("%d",&p[i].level);
        printf("Score : ");
        scanf("%d",&p[i].score);
    }
    FILE* fp;
    fp = fopen("Player.txt","w");
    for (int j = 0; j < 5; j++)
    {
        fprintf(fp,"Name : %s\nLevel : %d\nScore : %d\n",p[j].name,p[j].level,p[j].score);
    }
    fclose(fp);
    return 0;
}