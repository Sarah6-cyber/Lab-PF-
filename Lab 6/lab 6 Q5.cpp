#include<stdio.h>
int main(){
	int number;
	int prime_or_not=0;
	printf("enter a number to check if it is a prime number.\n");
	scanf("%d",&number);
	if (number<=1){
		printf("%d is not a prime number\n",number);
	}
	else {
		for (int i=2; i <= number/2; i++){
			if (number%i==0){
				prime_or_not=1;
				break;
			}
		}
	}
	if (prime_or_not==1){
		printf("%d is not a prime number",number);
	}
	else if (prime_or_not==0){
		printf("%d is a prime number",number);
	}
	return 0;
}
	