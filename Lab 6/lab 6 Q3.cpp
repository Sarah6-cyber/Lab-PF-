#include<stdio.h>
int main(){
	int num;
	printf("enter a positive integer \n");
	do {
		scanf("%d",&num);
		if (num<=0){
			printf("incorrect, try again! :( \n");
		} 
	}while (num<=0);
	printf("correct :)");
	return 0;
	
}