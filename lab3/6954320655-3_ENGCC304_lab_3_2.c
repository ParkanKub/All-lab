#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if( a >= 50){
        printf("Pass\n");
    }
    if( a < 50 || a == 0){
        printf("Fail\n");
    }
}