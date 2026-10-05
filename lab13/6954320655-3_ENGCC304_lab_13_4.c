#include <stdio.h>
int sumTwo(int a,int b){
    return a+b;
}
int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Sum = %d",sumTwo(a,b));
    return 0;
}