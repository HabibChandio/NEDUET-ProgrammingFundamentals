#include <stdio.h>

int main(void)
{
	int amount;
	float discount, saved, to_pay;
	printf("Input your amount: ");
	scanf("%d", &amount);
	if(amount<2000)
		discount = 0;
	else if(amount<4000)
		discount = 0.2;
	else if(amount<6000)
		discount = 0.3;
	else
		discount = 0.5;
	saved = amount*discount;
	to_pay = amount-saved;
	printf("Your amount was Rs. %d\nYou saved Rs. %0.2f\nYou have to pay Rs. %0.2f.\n", amount, saved, to_pay);
	return 0;
}