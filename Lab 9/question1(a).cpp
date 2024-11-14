#include<stdio.h>
void pattern(int n){
	int rows=2*n+1;
	for (int i=0; i<n+1; i++){
		for (int j=n-i; j>=0; j--){
			printf(". ");
		}
		for (int k=0; k<=i; k++){
			printf("o");
		}
		printf("\n");
	}
	for (int i=n; i>1; i--){
		for (int k=0; k<=n-i+1; k++){
			printf(". ");
		}
		for (int j=i-1; j>0; j--){
			printf("o");
		}
		printf("\n");
	}
}
int main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
	pattern(n);
	return 0;
	}