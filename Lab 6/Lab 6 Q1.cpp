#include<stdio.h>
int main(){
	int number;
	int factorial=1;
	printf("enter the number you want to find the factorial of:\n");
	scanf("%d",&number);
	if (number<0){
		printf("error! enter a positive integer");
	}else {
	for (int i=number; i>0; i--){
		factorial=factorial*i;
	}
	printf("the factorial of %d is %d \n",number ,factorial);}
	return 0;
}