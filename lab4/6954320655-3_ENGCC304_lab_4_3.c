#include <stdio.h>
int main()
{
    int a, s, d;
    scanf("%d %d", &a, &s);
    scanf("%d", &d);
    switch (d)
    {
    case 1:
        printf("Result = %d", a + s);
        break;
    case 2:
        printf("Result = %d", a - s);
        break;
    case 3:
        printf("Result = %d", a*s);
        break;
    default:
        printf("Invalid choice");

    }
}