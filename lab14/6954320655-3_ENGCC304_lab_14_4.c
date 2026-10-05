#include <stdio.h>

struct Student {
    int id;
    float midterm;
    float final;
};
int main (){
    struct Student stu;
    scanf("%d %f %f",&stu.id,&stu.midterm,&stu.final);
    float average = (stu.midterm + stu.final) / 2;
    printf("Average = %.2f\n", average);

    return 0;
}