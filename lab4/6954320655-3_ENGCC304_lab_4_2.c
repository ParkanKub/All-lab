#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("Price = 10");
            break;
        case 2:
            printf("Price = 15");
            break;
        case 3:
            printf("Price = 20");
            break;
        default:
            printf("Invalid menu");
    }
}