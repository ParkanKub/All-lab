#include <stdio.h>
int main()
{
    int i, n[5], sum = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }
    printf("First = %d\n", n[0]);
    printf("Last = %d\n", n[4]);

}