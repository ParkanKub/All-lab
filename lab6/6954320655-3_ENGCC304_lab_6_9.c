#include <stdio.h>
int main (){
    int n;
    do
    {
       scanf("%d", &n);
       switch (n)
       {
       case 1234:
        printf("Correct\n");
        break;
       
       default:
       printf("Wrong\n");
        break;
       }

    } while (n != 1234);
    
}