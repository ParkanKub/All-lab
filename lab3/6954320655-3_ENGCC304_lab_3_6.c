#include <stdio.h>

int main()
{
    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b){
        if (a >= c){
            sum = a;
        }else{
            sum = c;
        }
    }else{
        if (b >= c)
        {
            sum = b;
        }
        else
        {
            sum = c;
        }
    }
    printf("Max = %d\n", sum);
}