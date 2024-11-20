#include<stdio.h>
void correspondingPercentage(int value, int percent){
	if (percent>100){
		return;
	}
	float result=(value*percent)/100;
	printf(" %d percent = %.2f\n",percent, result);
	correspondingPercentage(value, percent+1);
}

int main(){
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	correspondingPercentage(num, 1);
	return 0;
}

