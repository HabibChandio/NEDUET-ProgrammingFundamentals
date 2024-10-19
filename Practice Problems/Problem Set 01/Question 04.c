#include <stdio.h>
int main(void)
{
	int n1, n2, n3;
	printf("Enter number 1: ");
	scanf("%d", &n1);
	printf("Enter number 2: ");
	scanf("%d", &n2);
	printf("Enter number 3: ");
	scanf("%d", &n3);
	if(n3>n2 && n3>n1)
		printf("Number 3 is largest.\n");
	else if(n2>n1 && n2>n3)
		printf("Number 2 is largest.\n");
	else if(n1>n3 && n1>n2)
		printf("Number 1 is largest.\n");
	else
		printf("They are equal.\n");
	return 0;
}