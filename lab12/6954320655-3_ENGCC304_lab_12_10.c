#include <stdio.h>

void showSign(int n);

int main() {
    int n;
    scanf("%d", &n);
    showSign(n);
    return 0;
}

void showSign(int n) {
    if (n > 0) {
        printf("Positive");
    } else if (n < 0) {
        printf("Negative");
    } else {
        printf("Zero");
    }
}