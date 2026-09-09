#include <stdio.h>
int main()
{
    int a, max, i;
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &a);
        if(i == 1){
            max = a;
        }
        else{
            if(a > max){
                max = a;
            }
        }
    }
    printf("Max = %d", max);
}