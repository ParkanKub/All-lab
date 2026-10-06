#include <stdio.h>
int main(){
    FILE *fp;
    int num1,num2,num3,result;
    scanf("%d %d %d",&num1,&num2,&num3);
    fp = fopen("maxfile.txt","w");
    fprintf(fp,"%d\n",num1);
    fclose(fp);
    fp = fopen("maxfile.txt","a");
    fprintf(fp,"%d\n",num2);
    fclose(fp);
    fp = fopen("maxfile.txt","a");
    fprintf(fp,"%d\n",num3);
    fclose(fp);
    fp = fopen("maxfile.txt","r");
    fscanf(fp,"%d %d %d",&num1,&num2,&num3);
    fclose(fp);
    if(num1>num2 && num1>num3){
        result = num1;
    }
    else if(num2>num1 && num2>num3){
        result = num2;
    }
    else{
        result = num3;
    }
    printf("Max = %d\n", result);
}