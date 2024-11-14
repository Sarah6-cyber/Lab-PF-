#include<stdio.h>
int main(){
	int bolt, nut, washer;
	int total=0;
	printf("Number of bolts:\n");
	scanf("%d",&bolt);
	printf("Number of nuts:\n");
	scanf("%d",&nut);
	printf("Number of washers:\n");
	scanf("%d",&washer);
	total=(washer*1)+(nut*3)+(bolt*5);
	if (nut>=bolt && washer>=2*bolt){
		printf("Check the Order: Order is Ok\n");
	}
	if (nut<bolt){
		printf("Check the Order: too few nuts\n");
	}
	if (washer<2*bolt){
		printf("Check the Order: too few washers\n");
	}
	printf("Total cost: %d",total);
	return 0;
}