#include <stdio.h>

struct Student {
    int id;
    int score;
};

int main (){
    struct Student stu;
    FILE *fp;
    scanf("%d %d",&stu.id,&stu.score);
    fp = fopen("student.txt","w");
    fprintf(fp,"ID: %d, Score: %d\n", stu.id, stu.score);
    fclose(fp);
    fp = fopen("student.txt","r");
    fscanf(fp,"ID: %d, Score: %d\n",&stu.id,&stu.score);
    fclose(fp);
    printf("ID = %d\n", stu.id);
    printf("Score = %d\n", stu.score);
    return 0;
}