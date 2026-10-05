#include <stdio.h>

int SumArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main () {
    int i,arr[4];
    for (i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    printf("Sum = %d", SumArray(arr, 4));
    return 0;
}