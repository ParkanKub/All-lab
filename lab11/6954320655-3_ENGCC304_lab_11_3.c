#include <stdio.h>
#include <string.h>
int main (){
    char word[10];
    scanf("%s",word);
    printf("First = %c\n",word[0]);
    printf("Last = %c",word[strlen(word)-1]);

    return 0;
}