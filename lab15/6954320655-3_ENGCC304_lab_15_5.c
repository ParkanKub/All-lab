#include <stdio.h>
int main(){
    FILE *fp;
    int arr[4], i, val;
    for(i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }  

    fp = fopen("sum_file.txt","w");
    for(i=0;i<4;i++){
        fprintf(fp,"%d\n",arr[i]);
    }
    fclose(fp);

    fp = fopen("sum_file.txt","r");
    for(i=0;i<4;i++){
        fscanf(fp,"%d",&val);
    }
    fclose(fp);
    printf("Sum = %d",arr[0]+arr[1]+arr[2]+arr[3]);
    return 0;
}