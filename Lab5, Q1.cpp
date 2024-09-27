#include <stdio.h>
int main(){
	int Age;
	int citizenship;
	printf("enter your age");
	scanf("%d",&Age);
	printf("are you a pakistani citizen? (YES=1 , NO=0)");
	scanf("%d",&citizenship);
	if (Age<18){
		printf("you are not eligible for vote");
	}
	else if (citizenship!=1 && citizenship!=0){
		printf("incorrect digit entry for citizenship status");
	}
	else if (Age>=18){
		if (citizenship==1){
			printf("you are eligible for vote");
		}
		else if (citizenship==0){
			printf("you are not eligible for vote");
		}
	}
	return 0;
}

    