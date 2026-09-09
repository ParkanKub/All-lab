#include <stdio.h>
#include <fcntl.h> 
#include <io.h>
int main()
{
        _setmode(_fileno(stdout), _O_BINARY);
        int a,d ,sum;
        scanf("%d %d", &a, &d);
        sum = 2*(a + d);
        printf("Perimeter = %d", sum);
        return 0;
}