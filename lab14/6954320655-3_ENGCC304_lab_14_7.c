#include <stdio.h>

struct student {
    int id;
    int score;
};

int main (){
    struct student stu[2];
    int i;
    for(i = 0; i < 2; i++){
        scanf("%d %d", &stu[i].id, &stu[i].score);
    }
    printf("Student 1 = %d %d\n", stu[0].id , stu[0].score);
    printf("Student 2 = %d %d\n", stu[1].id , stu[1].score);
    return 0;

}