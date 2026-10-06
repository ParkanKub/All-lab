#include <stdio.h>

int main()
{
    FILE *fp;
    int num1, num2, result;

    scanf("%d %d", &num1, &num2);
    fp = fopen("append.txt", "w");
    fprintf(fp, "%d\n", num1);
    fclose(fp);

    fp = fopen("append.txt", "a");
    fprintf(fp, "%d\n", num2);
    fclose(fp);

    fp = fopen("append.txt", "r");
    fscanf(fp, "%d %d", &num1, &num2);
    fclose(fp);

    printf("Sum = %d", num1 + num2);
    return 0;
}