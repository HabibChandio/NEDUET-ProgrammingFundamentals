#include <stdio.h>
int main()
{
	int num, dig, even = 0, odd = 0, counte = 0, counto = 0, copy;
	printf("Enter a number: ");
	scanf("%d", &num);
	copy = num;
	while(num > 0)
	{
		dig = num%10;
		num /= 10;	
		if(dig % 2 == 0)
		{
			even++;
			if(copy % dig == 0)
				counte++;
		}
		else
		{
			odd++;
			if(copy % dig == 0)
				counto++;
		}
	}
	if(even == counte && odd != counto)
		printf("%d is Evenish.\n", copy);
	else if(odd == counto && even != counte)
		printf("%d is Oddish.\n", copy);
	else if(counte > 0 && counto > 0)
		printf("%d is Evenish-Oddish.\n", copy);
	else
		printf("%d is Neutral.\n");
	return 0;
}