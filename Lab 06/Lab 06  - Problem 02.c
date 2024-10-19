#include <stdio.h>
int main(void)
{
	int n1 = 0, n2 = 1, n3 = 1, sum = 0;
	printf("0, 1");
	/*for(int i = 0; i < 1000; i = n3)
	{
		printf(", %d", n3);
		n1 = n2;
		n2 = n3;
		n3 = n1 + n2;
		if(n3%3==0 || n3%5==0 || n3%7==0)
			sum += n3;
	}*/
	while(n3 < 1000)
	{
		printf(", %d", n3);
		n1 = n2;
		n2 = n3;
		n3 = n1 + n2;
		if(n3%3==0 || n3%5==0 || n3%7==0)
			sum += n3;
	}
	printf("\nSum of numbers divisible by 3, 5, or 7 is: %d", sum);
	return 0;
}