#include <stdio.h>

int main() {
    char Language[100];
    char Compiler[100];
    char Out[100];
    scanf("%s %s %s", Language, Compiler, Out);
    printf("Language: %s\n", Language);
    printf("Compiler: %s\n", Compiler);
    printf("Output Program: %s\n", Out);
    return 0;
}