#include <stdio.h>
int main (){
    int arr[5],i,j,target,count=0;
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(i=0;i<5;i++){
        if(arr[i]==target){
            count++;
        }
    }
    printf("Count = %d\n",count);
}
