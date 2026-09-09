#include <stdio.h>
int main()
{
    int i, arr[5], target,found = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for(i=0;i<5;i++){
        if(arr[i] == target){
            found = 1;
            break;
        }
    }
    if(found){
        printf("Found");
    }
    else{
        printf("Not Found");
    }
}