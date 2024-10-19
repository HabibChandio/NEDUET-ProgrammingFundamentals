#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	printf("Input first number: ");
	scanf("%d", &n1);
	printf("Input second number: ");
	scanf("%d", &n2);
	printf("n1: %d, n2: %d\n", n1, n2);
	n3 = n1;
	n1 = n2;
	n2 = n3;
	printf("n1: %d, n2: %d\n", n1, n2);
	return 0;
}