#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }
}