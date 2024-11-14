#include<stdio.h>
void generatingPattern(int num){
	for (int i=0; i<=num; i++){
		for (int j=1; j<=i; j++){
			printf("%d",j);
		}
		for (int k=i-1;k>=1;k--){
			printf("%d",k);
		}
		printf("\n");
	}
}
int main(){
	int num;
	printf("enter a number");
	scanf("%d",&num);
	generatingPattern(num);
	return 0;
}