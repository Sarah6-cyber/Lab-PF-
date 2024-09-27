#include <stdio.h>
int main(){
	int Angle_x,Angle_y,Angle_z;
	int sum;
	printf("enter first angle");
	scanf("%d",&Angle_x);
	printf("enter second angle");
	scanf("%d",&Angle_y);
	printf("enter third angle");
	scanf("%d",&Angle_z);
	if (Angle_x<0 || Angle_y<0 || Angle_z<0){
		printf("Error! incorrect values entered for angles");
	}
	else {
		sum=Angle_x + Angle_y + Angle_z;
		if (sum=180){
			printf("the triangle is valid");
		}
		else {
			printf("the triangle is invalid");
		}
	}
	return 0;
}