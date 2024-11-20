#include<stdio.h>
int digitSum(int n) {
    if (n==0) {
        return 0;
    }
    return (n%10)+digitSum(n/10);
}

int main() {
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    if (num<0) {
        num = -num;
    }
    int sum=digitSum(num);
    printf("The sum of the digits %d is %d\n",num, sum);
    return 0;
}