#include<stdio.h>
#include<string.h>
void stringReversal(char string[], int initial, int final){
	if (initial>=final){
		return;
	}
	char temp=string[initial];
	string[initial]=string[final];
	string[final]=temp;
	stringReversal(string, initial+1, final-1);
}

int main(){
	char message[100];
	printf("enter a sentence\n");
	fgets(message,sizeof(message),stdin);
	int length=strlen(message);
	stringReversal(message, 0, length-1);
	printf("%s",message);
	return 0;
	
}