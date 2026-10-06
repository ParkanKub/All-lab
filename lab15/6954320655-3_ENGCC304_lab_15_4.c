#include <stdio.h>

int main()
{
    FILE *fp;

    int arr[3], i, val;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    fp = fopen("arrays.txt", "w");
    for (i = 0; i < 3; i++)
    {
        fprintf(fp, "%d\n", arr[i]);
    }
    fclose(fp);

    fp = fopen("arrays.txt", "r");
    for (i = 0; i < 3; i++){
        fscanf(fp, "%d", &val);
        printf("%d\n", val);
    }
    fclose(fp);
    return 0;
}