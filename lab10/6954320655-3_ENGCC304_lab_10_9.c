#include <stdio.h>
int main()
{
    int arr[4], i = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("First = %d\n",arr[0]);
    printf("Last = %d\n",arr[3]);
}
