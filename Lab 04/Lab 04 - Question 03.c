#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, b, c, dmt;
	printf("Enter the value of 'a': ");
	scanf("%f", &a);
	printf("Enter the value of 'b': ");
	scanf("%f", &b);
	printf("Enter the value of 'c': ");
	scanf("%f", &c);
	dmt = (b*b)-(4*a*c);
	if(dmt>0)
	{
		float x1 = ((-b)+((sqrt(dmt))))/(2*a);
		float x2 = ((-b)-((sqrt(dmt))))/(2*a);
		printf("The real roots of the equation are: %0.3f, %0.3f\n", x1, x2);
	}
	else if(dmt<0)
		printf("The equation has imaginary roots.\n");
	else
		printf("The root of the equation is: %0.3f", (-b)/(2*a));
	return 0;
}