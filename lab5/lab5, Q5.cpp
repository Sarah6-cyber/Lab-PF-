#include<stdio.h>
int main(){
	int a;
	printf("enter a number to check if its even or odd.");
	scanf("%d",&a);
	if ( a & 1){
		printf("%d is odd.",a);
	}
	else {
		printf("%d is even.",a);
	}
return 0;
}