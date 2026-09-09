#include <stdio.h>
int main()
{
    int i, n[5], sum = 0;

    for (i = 1; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }
        for (i = 4; i >= 1; i--)
    {
        printf("%d\n", n[i]);
    }

}