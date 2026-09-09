#include <stdio.h>
int main() {
    int i, n[5], sum=0;
    for(i=0; i<4;i++){
        scanf("%d",&n[i]);
        sum += n[i];
    }
    printf("Average = %d", sum/4);
}