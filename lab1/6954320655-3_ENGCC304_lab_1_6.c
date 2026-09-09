#include <stdio.h>

int main()
{
    char Source[100];
    char Compiler[100];
    char Program[100];
    scanf("%s %s %s", Source, Compiler, Program);
    printf("Source Code: %s\n", Source);
    printf("Compiler: %s\n", Compiler);
    printf("Program: %s\n", Program);
    return 0;
}