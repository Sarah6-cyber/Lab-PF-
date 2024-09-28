#include<stdio.h>
int main(){
	int num;
	int count = 0;
	printf("enter a number");
	scanf("%d",&num);
	if (num & 1){
		count+=1;
	}
	if (num & 2){
		count+=1;
	}
	if (num & 4){
		count+=1;
	}
	if (num & 8){
		count+=1;
	}
	printf("binary 1's in the number : %d",count);
	return 0;
	
}
