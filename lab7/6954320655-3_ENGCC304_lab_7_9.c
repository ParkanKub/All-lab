#include <stdio.h>
int main()
{
    int n, i, sum;
    scanf("%d %d", &n, &i);
    scanf("%d", &sum);
    switch (sum)
    {
    case 1:
        printf("Result = %d\n", n + i);
        break;
    case 2:
        printf("Result = %d\n", n - i);
        break;
    default:
        printf("Invalid\n");
        break;
    }
}
