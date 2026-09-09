#include <stdio.h>
int main (){
    int arr[4],i,j,temp;
    for(i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3 -i;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
        printf("Second = %d\n",arr[2]);
    
}