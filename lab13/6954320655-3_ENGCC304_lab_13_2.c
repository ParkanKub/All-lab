#include <stdio.h>

void addOne(int *p)
{
    *p = *p + 1;
}

int main()
{
    int a;
    scanf("%d", &a);
    addOne(&a);
    printf("Result = %d", a);
    return 0;
}