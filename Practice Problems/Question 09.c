#include <stdio.h>
int main(void)
{
	int x, y, base;
	printf("Enter base: ");
	scanf("%d", &x);
	printf("Enter exponent: ");
	scanf("%d", &y);
	printf("%d^%d = ", x, y);
	base = x;
	for(int i = y; i>1; i--)
	{
		x *= base;
	}
	printf("%d\n", x);
	return 0;
}