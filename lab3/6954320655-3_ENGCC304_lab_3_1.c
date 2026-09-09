#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    if(a > b){
        printf("First is bigger\n");
    }
    if(b > a){
        printf("Second is bigger\n");
    }
    if(a == b){
        printf("Equal\n");
    }
    
    return 0;
}