#include <stdio.h>
int main()
{
    int i, n[5], sum = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        if (n[i] % 2 == 0)
        {
            sum += n[i];
        }
    }
    printf("Count = %d", sum);

}