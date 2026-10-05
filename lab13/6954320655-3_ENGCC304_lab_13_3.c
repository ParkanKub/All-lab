#include <stdio.h>
void swap(int *x,int*y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("First = %d\n",a);
    printf("Second = %d\n",b);
    return 0;
}