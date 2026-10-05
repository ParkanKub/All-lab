#include <stdio.h>
int main (){
    int a,*p; 
    scanf("%d",&a);
    p = &a;
    printf("Value = %d",*p);
    return 0;
}