#include <stdio.h>

int main()
{
    FILE *fp;
    int num1, num2, result;

    scanf("%d %d", &num1, &num2);
    fp = fopen("two _numbers.txt", "w");
    fprintf(fp, "%d\n", num1);
    fclose(fp);

    fp = fopen("two _numbers.txt", "a");
    fprintf(fp, "%d\n", num2);
    fclose(fp);

    fp = fopen("two _numbers.txt", "r");
    fscanf(fp, "%d %d", &num1, &num2);
    fclose(fp);

    printf("Sum = %d", num1 + num2);
    return 0;
}