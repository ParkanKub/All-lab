#include <stdio.h>
int main()
{
    char a;
    scanf(" %c", &a);
    switch (a)
    {
    case 'A':
        printf("Add");
        break;
    case 'D':
        printf("Delete");
        break;
    case 'U':
        printf("Update");
        break;
    default:
        printf("Unknown command");
    }
}