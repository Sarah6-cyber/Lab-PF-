#include<stdio.h>
#include<string.h>
void stringReversal(char str[], int initial, int final){
	if (initial>=final){
		return;
	}
	char temp=str[initial];
	str[initial]=str[final];
	str[final]=temp;
	stringReversal(str, initial+1, final-1);
}

int main(){
	char string[200];
	printf("enter a string to reverse\n");
	scanf("%s",&string);
	int length=strlen(string);
	stringReversal(string, 0, length-1);
	printf("reversed string is: %s",string);
	return 0;
}