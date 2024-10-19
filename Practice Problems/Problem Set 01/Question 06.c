#include <stdio.h>
int main(void)
{
	int num;
	printf("Enter a positive number: ");
	scanf("%d", &num);
	printf("Reverse of %d is: ", num);
	for(int i = 10; num%i != 0; )
	{
		printf("%d", (num%i));
		num /= i;
	}
	return 0;
}