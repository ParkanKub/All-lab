#include <stdio.h>
int main (){
    int n;

    do
    {
        scanf("%d", &n);
        switch (n)
        {
            case 1:
                printf("Hello\n");
                break;
            case 2:
                printf("Bye\n");
                break;
            case 0:
                printf("Exit\n");
                break;
            
            default:
                printf("Invalid\n");
        }

    } while (n != 0);
    
}