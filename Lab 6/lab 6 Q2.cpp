#include<stdio.h>
int main(){
	int input_n;
	int i=2;
	printf("enter a number");
	scanf("%d",&input_n);
	while (i<=input_n){
		printf("%d\n",i);
		i+=2;
	}
	return 0;
}