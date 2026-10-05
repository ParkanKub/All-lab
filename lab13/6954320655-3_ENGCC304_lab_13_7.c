#include <stdio.h>

int addTen(int *p){
    *p = *p + 10;
}

int main () {
    int a;
    scanf("%d", &a);
    addTen(&a);
    printf("Result = %d", a);
    return 0;
}