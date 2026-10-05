#include <stdio.h>

struct student {
    int id;
    int score;
};

int addBonus(struct student stu){
    return stu.score + 5;
}

int main (){
    struct student stu;
    scanf("%d %d",&stu.id,&stu.score);
    printf("ID = %d\n", stu.id);
    printf("Score = %d\n", addBonus(stu));

}