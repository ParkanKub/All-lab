#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a >= 300 || b == 1)
    {
        printf("Free Shipping\n");
    }if(a <= 300 && b == 0){
        printf("Shipping Required\n");
    }
}