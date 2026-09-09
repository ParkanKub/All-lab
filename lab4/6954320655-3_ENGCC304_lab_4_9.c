#include <stdio.h>
int main()
{
    char a;
    scanf(" %c", &a);
    switch (a)
    {
    case 'A':
    case 'E':
        printf("Vowel");
        break;
    case 'B':
    case 'Z':
        printf("Consonant");
        break;
    }
}