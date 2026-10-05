#include <stdio.h>

int findMax(int *a,int *b){
    if(*a>*b){
        return *a;
    }else{
        return *b;
    }
}

int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Max = %d",findMax(&a,&b));
    return 0;
}