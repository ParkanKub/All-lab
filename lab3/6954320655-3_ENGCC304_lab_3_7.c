#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 10 && a <= 20)
    {
        printf("Cold\n");
    }
    if( a >= 21 && a <= 30){
        printf("Normal\n");
    }
    if(a >= 31){
        printf("Hot\n");
    }
}