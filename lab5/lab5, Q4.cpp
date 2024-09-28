#include<stdio.h>
int main(){
	int total_amt;
	char membership_status;
	printf("enter total purchase amount");
	scanf("%d",&total_amt);
	printf("Are you a member ? (if yes press Y , if no press N)");
	scanf(" %c",&membership_status);
	(membership_status!='Y' && membership_status!='N') ? printf("incorrect membership status") : (total_amt>100 && membership_status=='Y') ? printf("you are eligible for discount") : printf("you are not eligible for discount");
	return 0;
	
	
}
