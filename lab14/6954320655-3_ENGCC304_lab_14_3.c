#include <stdio.h>

struct Product {
    int quantity;
    int price;
};

int getTotalCost(struct Product pro){
    return pro.quantity * pro.price;
}

int main (){
    struct Product pro;
    scanf("%d %d",&pro.quantity,&pro.price);
    printf("Total = %d\n", getTotalCost(pro));

    return 0;   
}