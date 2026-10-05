#include <stdio.h>

struct Student
{
    int score;
};

int maxScore(struct Student stu[], int size)
{
    int max = stu[0].score;
    for (int i = 1; i < size; i++)
    {
        if (stu[i].score > max)
        {
            max = stu[i].score;
        }
    }
    return max;
}

int main()
{
    struct Student stu[3];
    int i;
    for(i = 0; i < 3; i++){
        scanf("%d", &stu[i].score);
    }
    printf("Max = %d\n", maxScore(stu, 3));
    return 0;
}