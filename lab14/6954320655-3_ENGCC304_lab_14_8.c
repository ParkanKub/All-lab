#include <stdio.h>

struct Product {
    int quantity;
};
int sumQuantity(struct Product pro[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += pro[i].quantity;
    }
    return sum;
}

int main (){
    struct Product pro[3];
    int i;
    for(i = 0; i < 3; i++){
        scanf("%d", &pro[i].quantity);
    }
    printf("Total = %d\n", sumQuantity(pro, 3));
    return 0;

}