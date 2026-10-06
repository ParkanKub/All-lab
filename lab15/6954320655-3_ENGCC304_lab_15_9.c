#include <stdio.h>

int main (){
    FILE *fp;
    int i, arr[4],count=0;
    fp =fopen("even.txt","w");
    for(i=0;i<4;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            fprintf(fp,"%d\n",arr[i]);
            count++;
        }
    }
    fclose(fp);
    printf("Count = %d\n", count);
    return 0;
}