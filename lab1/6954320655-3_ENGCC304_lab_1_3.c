#include <stdio.h>
int main(){
    int StudentID;
    char Nick_name[50];
    char Section[50];
    scanf("%d %s %s", &StudentID , Nick_name, Section);
    printf("Student ID: %d\n", StudentID);
    printf("Nickname: %s\n", Nick_name);
    printf("Section: %s\n", Section);
    return 0;

}