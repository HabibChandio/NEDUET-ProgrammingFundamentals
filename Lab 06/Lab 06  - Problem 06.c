#include <stdio.h>
int main(void)
{
	int rows, upperHalf, lowerHalf;
	printf("Input no. of rows of diamond (odd number): ");
	scanf("%d", &rows);
	upperHalf = (rows+1)/2;
	lowerHalf = rows - upperHalf;
	for(int i = 1; i <= upperHalf; i++)
	{
		for(int j = 0; j < upperHalf-i; j++)
		{
			printf(" ");
		}
		for(int k = 0; k <  (2*i)-1; k++)
		{
			printf("#");
		}
		printf("\n");
	}
	for(int i = 0; i < lowerHalf; i++)
	{
		for(int j = lowerHalf; j > lowerHalf-(i+1); j--)
		{
			printf(" ");
		}
		for(int k = 0; k < (2*(lowerHalf-i))-1; k++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}