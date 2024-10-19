#include <stdio.h>
int main(void)
{
	int sum, num, total;
	sum = 0;
	printf("Enter total number of integers: ");
	scanf("%d", &total);
	for(int i = 1; i<=total; i++)
	{
		printf("Enter number %d: ", i);
		scanf("%d", &num);
		sum += num;
	}
	printf("Average of numbers is: %d", (sum/total));
	return 0;
}