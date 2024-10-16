#include <stdio.h>
int main(void)
{
	int num, sum = 0, dig[5], numCopy, count;
	printf("Enter a 5 digit number: ");
	scanf("%d", &num);
	numCopy = num;
	for(int i = 0; i < 5; i++)
	{
		dig[i] = num%10;
		num /= 10;
		sum += dig[i];
	}
	if(sum%2 == 0)
	{
		for(int i = 1; i <= numCopy; i++)
		{
			if(numCopy%i == 0)
				count++;
		}
		if(count == 2)
			printf("%d is a prime number.\n", numCopy);
		else
			printf("%d is not a prime number.\n", numCopy);
	}
	else
	{
		if(dig[0] == dig[4] && dig[1] == dig[3])
			printf("%d is a palindrome number.\n", numCopy);
		else
			printf("%d is not a palindrome number.\n", numCopy);
	}
	return 0;
}