#include <stdio.h>
int main()
{

    int Id,num;
    char name[10];
    scanf("%d", &Id);
    scanf("%s", name);
    scanf("%d", &num);

    printf("Student ID: %d\n", Id);
    printf("Name: %s\n", name);
    printf("Age: %d\n", num);
    return 0;
}