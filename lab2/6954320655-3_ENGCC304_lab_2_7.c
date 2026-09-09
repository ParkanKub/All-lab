#include <stdio.h>
int main()
{
        int a,Meter,Centi,sum;
        scanf("%d", &a);
        Meter = a / 100;
        Centi = Meter * 100;
        sum = a - Centi;
        printf("Meter = %d\n", Meter);
        printf("Centimeter = %d", sum);
        return 0;
}