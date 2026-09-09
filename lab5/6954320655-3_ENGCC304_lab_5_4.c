#include <stdio.h>
int main()
{
    int a, sum = 0,i = 1;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &a);
        sum += a;
    }
    printf("i สุดท้าย %d\n: ", i);

    printf("Sum = %d", sum);
}