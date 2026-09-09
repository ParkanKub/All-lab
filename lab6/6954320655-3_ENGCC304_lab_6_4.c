#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n <= 0)
    {
        scanf("%d", &n); 
    }
    printf("Accepted = %d\n", n);
}