#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 4:
        printf("Grade = A");
        break;
    case 2:
        printf("Grade = C");
        break;
    case 0:
        printf("Grade = F");
        break;

    default:
    printf("Invalid grade");
        break;
    }
}