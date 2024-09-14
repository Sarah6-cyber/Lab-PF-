#include<stdio.h>
int main(){
	int Marks;
	printf("enter your marks");
	scanf("%d",&Marks);
	if (Marks < 90 && Marks < 0){
		printf("Error! Incorrect marks entered.");
	}
	else if (Marks>=90 && Marks<=100){
		printf("you secured an A grade");
	}
	else if (Marks>=80 && Marks<=89){
		printf("You secured a B grade");
	}
	else if (Marks>=70 && Marks<=79){
		printf("You secured a C grade");
	}
	else if (Marks>=60 && Marks<=69){
		printf("You secured a D grade");
	}
	else if (Marks<60){
		printf("You failed");
	}
return 0;
}

#include<stdio.h>
int main(){
	float Units;
	float Total_bill;
	float price;
	printf("enter unit charges consumed");
	scanf("%f",&Units);
	if (Units<=30){
		price=Units*0.60;
	}
	else if (Units<=110){
		price=(30*0.60)+((Units-30)*0.85);
	}
	else if (Units<=210){
		price=(30*0.60)+(80*0.85)+((Units-110)*1.30);
	}
	else{
		price=(30*0.60)+(80*0.85)+(100*1.30)+((Units-210)*1.60);
	}
	Total_bill=price*1.15;
	printf("your total electricity bill is %.3f",Total_bill);
	return 0;
}

#include<stdio.h>
int main(){
	float O_amount;
	float S_amount;
	float AfterD_amount;
	float discount;
	printf("enter total cost of items");
	scanf("%f",&O_amount);
	if (O_amount<1500){
		discount=0.07;
	}
	else if (O_amount>=1500 && O_amount<=3000){
		discount=0.12;
	}
	else if (O_amount>3000 && O_amount<=5000){
		discount=0.22;
	}
	else{
		discount=0.30;
	}
	S_amount=O_amount*discount;
	AfterD_amount=O_amount-S_amount;
	printf("Original amount:%.3f\n",O_amount);
	printf("Amount saved due to discount:%.3f\n",S_amount);
	printf("Amount after applying the discount:%.3f\n",AfterD_amount);
	return 0;
}

#include<stdio.h>
int main(){
	int S;
	scanf("%d",&S);
	switch(S){
		case 1:
			{
			printf("one");
			break;
		}
		case 2:
			{
			printf("two");
			break;
		}
		case 3:
			{
			printf("three");
			break;
		}
		case 4:
			{
			printf("four");
			break;
		}
		case 5:
			{
			printf("five");
			break;
		}
		case 6:
			{
			printf("six");
			break;
		}
		case 7:
			{
			printf("seven");
			break;
		}
		case 8:
			{
			printf("eight");
			break;
		}
		case 9:
			{
			printf("nine");
			break;
		}
		case 10:
			{
			printf("ten");
			break;
		}
		case 11:
			{
			printf("eleven");
			break;
		}
		case 12:
			{
			printf("twelve");
			break;
		}
		case 13:
			{
			printf("thirteen");
			break;
		}
		case 14:
			{
			printf("fourteen");
			break;
		}
		case 15:
			{
			printf("fifteen");
			break;
		}
		case 16:
			{
			printf("sixteen");
			break;
		}
		case 17:
			{
			printf("seventeen");
			break;
		}
		case 18:
			{
			printf("eighteen");
			break;
		}
		case 19:
			{
			printf("nineteen");
			break;
		}
		case 20:
			{
			printf("twenty");
			break;
		}
}
return 0;
}


#include<stdio.h>
int main(){
	int time;
	printf("enter current time in 24-hour format");
	scanf("%d",&time);
	if (time>=6 && time<=11){
		printf("Good Morning");
	}
	else if (time>=12 && time<=17){
		printf("Good Afternoon");
	}
	else if (time>=18 && time<=23){
		printf("Good Evening");
	}
	else if (time>=0 && time<=5){
		printf("Good Night");
	}
	return 0;

}

#include<stdio.h>
int main(){
	int First_num;
	int Second_num;
	printf("enter first number");
	scanf("%f",&First_num);
	printf("enter second number");
	scanf("%f",&Second_num);
	if (First_num>Second_num){
		if (First_num>100){
			printf("first number is significantly larger");
		}
			else {
				printf("First number is larger");
			}
		}
	else if (Second_num>First_num){
		if (First_num<0){
			printf("First number is negative and smaller");
		}
		else 
		printf("First number is smaller");
	}
	else if (First_num == Second_num){
		printf("both numbers are equal");
	}
	return 0;
	}

#include<stdio.h>
int main(){
	printf("                                       _____________                                     \n");
	printf("                                      /             \\                                     \n");
	printf("                                     /  /\\_/\\        \\                                    \n");
	printf("                                    /  ( . . )   ^    \\                                   \n");
	printf("                                   /    )   (   ((     \\                                   \n");
	printf("\"cat\"                             |    ( > < )_ ))      |                                  \n");
	printf("                                   \\    -----          /                                  \n");
	printf("                                    \\   K24-0650      /                                  \n");
	printf("                                     \\               /                                    \n");
	printf("                                      \\_____________/                                      \n");
	return 0;
}



	


