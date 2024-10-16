#include <stdio.h>
int main(void)
{
	int num, factorial;
	factorial = 1;
	printf("Enter the number you want to get the factorial of: ");
	scanf("%d", &num);
	if(num>0)
	{
		printf("Factorial is = ");
		for(int i=num; i>0; i--)
		{
			printf("%d", i);
			if(i==1)
				printf("\n");
			else
				printf("*");
		}
	}
	return 0;
}