#include <stdio.h>

int main() {
    int table[2][2];
    int i, j;

    for ( i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &table[i][j]);
        }
    }

    for ( i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d", table[i][j]);
            if (j == 0) {
                printf(" ");
            }
        }
        printf("\n");    
    }
    return 0;
}