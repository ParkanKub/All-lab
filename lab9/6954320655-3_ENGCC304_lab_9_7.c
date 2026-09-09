#include <stdio.h>
int main()
{
    int i, n[5], sum = 0;

    for (i = 1; i < 5; i++)
    {
        scanf("%d", &n[i]);
        n[i] += 1;
        printf("%d\n", n[i]);
    }

}