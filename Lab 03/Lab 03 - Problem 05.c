#include <stdio.h>

int main(void)
{
	int amount;
	float rate, time, simple_interest, to_pay;
	printf("Input principle amount(100 - 1,000,000): ");
	scanf("%d", &amount);
	printf("Input rate of interest per annum(in percentage - (5 - 10 %)): ");
	scanf("%f", &rate);
	printf("Input time of interest(1 - 10 Years): ");
	scanf("%f", &time);
	simple_interest = (amount*rate*time)/100;
	to_pay = amount+simple_interest;
	printf("Simple interest: %f\nAmount to pay: %f", simple_interest, to_pay);
	return 0;
}