#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    int len;
    fgets(str,sizeof(str),stdin);
    len = (int)strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        len --;
    }
    printf("Length = %d",len);
    return 0;
}
