#include <stdio.h>
struct Student
{
    int id;
    int score;
};
int main()
{
    FILE *fp;
    int arr[2], i;
    struct Student stu[2];
    for (i = 0; i < 2; i++)
    {
        scanf("%d %d", &stu[i].id, &stu[i].score);
    }
    fp = fopen("students.txt", "w");
    for (i = 0; i < 2; i++)
    {
        fprintf(fp, "ID: %d, Score: %d\n", stu[i].id, stu[i].score);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    for (i = 0; i < 2; i++)
    {
        fscanf(fp, "ID: %d, Score: %d\n", &stu[i].id, &stu[i].score);
    }
    fclose(fp);
    printf("Total Score = %d\n", stu[0].score + stu[1].score);

    return 0;
}