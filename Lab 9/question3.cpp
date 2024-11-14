#include <stdio.h>
#include <string.h>
int main(){
    char username[10]="admin";
    int password=1234;     
    char input_username[10];       
    int input_pass;       
    printf("Enter username:\n");
    scanf("%s", input_username); 
    printf("Enter password:\n");
    scanf("%d", &input_pass);
    int result=strcmp(username, input_username); 
    if (result==0 && input_pass==password) {
        printf("Access granted!\n");
    } 
	else {
        printf("Access denied!\n");
    }
    return 0;
}