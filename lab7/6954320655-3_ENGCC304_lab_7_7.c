#include <stdio.h>
int main()
{
    int n;
    do
    {
        scanf("%d", &n);
        if(n != 1234)
        {
            printf("Wrong\n");
        }
        else
        {
            printf("Correct\n");
        }
    } while (n != 1234);
    
}