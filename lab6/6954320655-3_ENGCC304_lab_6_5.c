#include <stdio.h>
int main ()
{
    int n,sum=0,count=0;
    scanf("%d", &n);

    while (n != -1)
    {
        sum = sum + n;
        count++;
        scanf("%d", &n); 
    }
    printf("Average = %d\n", sum/count);
}