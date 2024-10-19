#include <stdio.h>

int main(void)
{
	int num, temp, numCopy;
	printf("Enter a number: ");
	scanf("%d", &num);
	num = 7*i;
	numCopy = num;
	while(num > 9)
	{
		temp = num%10;
		num = (num/10)-(temp*2);
	}
	if(num == 7 || num == -7 || num == 0)
		printf("%d is divisible by 7.\n", numCopy);
	else
		printf("%d is not divisible by 7.\n", numCopy);
	return 0;
}