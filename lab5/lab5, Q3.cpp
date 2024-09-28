#include<stdio.h>
int main(){
	int percentage;
	printf("enter your percentage");
	scanf("%d",&percentage);
	(percentage>=90) ? printf("you scored an A grade") : (percentage>=80) ? printf("you scored a B grade") : (percentage>=70) ? printf("you scored a C grade") : (percentage>=60) ? printf("you scored a D grade") : printf("you scored an F grade");
	return 0;
}