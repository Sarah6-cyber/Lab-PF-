#include<stdio.h>
struct phone{
    int areaCode;
    int exchange;
    int number;
};

int main(){
    struct phone my_number={212, 767, 8900}; 
    struct phone your_number;             
    printf("Enter area code: \n");
    scanf("%d",&your_number.areaCode);
    printf("Enter exchange: \n");
    scanf("%d",&your_number.exchange);
    printf("Enter number: \n");
    scanf("%d",&your_number.number);
    printf("My number is (%d) %d-%d\n", my_number.areaCode, my_number.exchange, my_number.number);
    printf("Your number is (%d) %d-%d\n", your_number.areaCode, your_number.exchange, your_number.number);
    return 0;
}
