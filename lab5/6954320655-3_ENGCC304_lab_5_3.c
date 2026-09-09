#include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        printf("i = %d\n", i);
        sum += i;
        printf("Sum = %d\n", sum);
        }
    printf("Sum = %d", sum);
}