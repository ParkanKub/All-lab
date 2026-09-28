#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    int i, count=0;
    scanf("%s",str);
    for (i = 0 ; i < strlen(str); i++){
        if (str[i] == 'a'){
            count++;
        }
    }
    printf("Count = %d",count);
    return 0;
}