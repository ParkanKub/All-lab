#include <stdio.h>
int main()
{
    int a, sum = 0;
    for (int i = 1; i <= 4; i++)
    {
        scanf("%d", &a);
        sum += a;
    }
    printf("Average = %d", sum/4);
}