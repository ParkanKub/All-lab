#include <stdio.h>
int main()
{
    int a, s;
    scanf("%d", &a);
    scanf("%d", &s);

    switch (a)
    {
    case 1:
        printf("Result = %d", s / 100);
        break;
    case 2:
        printf("Result = %d", s * 1000);
        break;
    default:
        printf("Invalid menu");
        break;
    }
}