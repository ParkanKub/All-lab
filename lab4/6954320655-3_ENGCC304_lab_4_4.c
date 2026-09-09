#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Jan");
        break;
    case 3:
        printf("Mar");
        break;
    case 4:
        printf("Apr");
        break;

    default:
        printf("Invalid month");
        break;
    }
}