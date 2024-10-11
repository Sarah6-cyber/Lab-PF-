#include<stdio.h>
int main(){
	int number;
	int prime_or_not=0;
	int num1=0, num2=1, next_num=0;
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
		printf("%d is a prime number\n",number);
		for (int j=0; j<=number; j++){
			printf("%d ",num1);
			next_num = num1 + num2;
			num1 = num2;
			num2 = next_num;
			if (num1 >= number){
				break;
			}
		}
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	