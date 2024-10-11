#include<stdio.h>
int main(){
	int input;
	int digit;
	int rem;
	int sum=0;
	printf("enter a three-digit number to check if it is an armstrong number or not.\n");
	scanf("%d",&input);
	digit = input;
	while (digit!=0){
		rem = digit % 10;
		sum += rem * rem * rem;
		digit = digit / 10;
	}
	if (sum==input){
		printf("%d is an Armstrong number.",input);
	}else {
		printf("%d is not an Armstrong number.",input);
	}
	return 0;
}