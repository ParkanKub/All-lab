#include <stdio.h>
int main()
{
    int n;

   do
   {
    scanf("%d", &n);
    if (n <= 5 && n >= 1){
        printf("Accepted = %d\n", n);
    }
   } while (n < 1 || n > 5);
}