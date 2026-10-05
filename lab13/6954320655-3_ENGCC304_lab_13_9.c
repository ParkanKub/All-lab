#include <stdio.h>

int countEven(int *arr) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main (){
int i,arr[5];
    for (i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Count = %d", countEven(arr));
    return 0;
}