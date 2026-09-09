#include <stdio.h>
int main (){
    int i,n,o;
    scanf("%d %d",&n,&i);
    scanf("%d",&o);
    switch(o){
        case 1:
            printf("Result = %d",n+i);
            break;
        case 2:
            printf("Result = %d",n-i);
            break;
        default:
            printf("Invalid");
    }
}
