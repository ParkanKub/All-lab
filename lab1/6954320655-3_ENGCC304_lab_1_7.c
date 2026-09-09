#include <stdio.h>
\
int main()
{
    char Name[100];
    char Section[100];
    scanf("%s %s", Name, Section);
    printf("================\n");
    printf("Name: %s\n", Name);
    printf("Section: %s\n", Section);
    printf("================");
    return 0;
}