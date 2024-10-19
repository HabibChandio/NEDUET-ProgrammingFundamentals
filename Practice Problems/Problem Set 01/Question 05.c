#include <stdio.h>
int main(void)
{
	int num, sum;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	for(int i = 1000000000; i > 0; i /= 10)
	{
		sum += num/i;
		num = num%i;
	}
	printf("Sum of digits is: %d", sum);
	return 0;
}