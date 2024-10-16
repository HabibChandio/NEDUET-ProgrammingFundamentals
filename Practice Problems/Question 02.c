#include <stdio.h>
int main(void)
{
	int principle, rate, time;
	printf("Enter principle amount: ");
	scanf("%d", &principle);
	printf("Enter rate of interest(in percentage w/o percentage symbol): ");
	scanf("%d", &rate);
	printf("Enter time: ");
	scanf("%d", &time);
	printf("Simple Interest: %d", ((principle*rate*time)/100));
	return 0;
}