#include <stdio.h>
int main(){
    int num1, num2,num3, sum=0;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2){
        sum+=num1;
    }
    if(num2>num3){
        sum+=num2;
    }
    if(num3>num1){
        sum+=num3;
    }
    printf("Max = %d\n", sum);
    return 0;
}