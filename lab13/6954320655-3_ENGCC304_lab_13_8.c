#include <stdio.h>
int incrementFirst(int *arr){
    *arr = *arr + 1;
}

int main (){
    int arr[3],i;
    for (i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    incrementFirst(&arr[0]);
    for (i=0;i<3;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}