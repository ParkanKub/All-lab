#include <stdio.h>

char getGrade(int score);

int main() {
    int score;
    scanf("%d", &score);
    printf("%c", getGrade(score));
    return 0;
}

char getGrade(int score) {
    return (score >= 80) ? 'A' : (score >= 70) ? 'B' : (score >= 60) ? 'C' : (score >= 50) ? 'D' : 'F';
}