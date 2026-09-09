#include <stdio.h>
int main()
{
    int i, n[5], m;
    scanf("%d", &n[0]);
    m = n[0];

    for (i = 1; i < 5; i++)
    {

        scanf("%d", &n[i]);

        if (n[i] > m)
        {
            m = n[i];
        }
    }
    printf("Max = %d", m);
}