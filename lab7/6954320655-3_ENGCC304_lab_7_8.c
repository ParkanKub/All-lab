#include <stdio.h>
int main()
{
    int n, i,k;
    // scanf("%d %d", &n, &i);
    scanf("%d %d", &n,&k);

    for (i = 1; i <= n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
