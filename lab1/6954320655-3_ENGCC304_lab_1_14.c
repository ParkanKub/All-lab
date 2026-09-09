#include <stdio.h>

int main()
{
    char name[100];
    int number;
    scanf("%s %d", name, &number);
    printf("+-----------+\n");
    printf("| %s %d |\n", name, number);
    printf("+-----------+");
    return 0;
}