#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if( a > 0 ){
        printf("Positive\n");
    }
    if( a < 0 ){
        printf("Negative\n");
    }
    if( a == 0 ){
        printf("Zero\n");
    }
}