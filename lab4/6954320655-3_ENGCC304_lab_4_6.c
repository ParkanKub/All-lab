#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Stop");
        break;
    case 2:
        printf("Ready");
        break;
    case 3:
        printf("Go");
        break;
    default:
        printf("Unknown signal");
    }
}