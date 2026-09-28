#include <stdio.h>
int main (){
    int i,j,sum=0;
    int arr[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
            sum += arr[i][j];
        }
    }
    printf("Sum = %d",sum);
}