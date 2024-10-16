#include <stdio.h>
int main(void)
{
	int temp;
	char choice;
	printf("\t\t\tTemperature Converter\n\n");
	printf("Convert to [C - Celsius / F - Fahrenheit]: ");
	scanf("%c", &choice);
	if(choice == 'C')
	{
		printf("Input temperature in fahrenheit: ");
		scanf("%d", &temp);
		printf("Temperature in celcius is: %0.2f\n", ((temp-32)*((float)5/(float)9)));
	}
	else if(choice == 'F')
	{
		printf("Input temperature in celcius: ");
		scanf("%d", &temp);
		printf("Temperature in fahrenheit is: %0.2f\n", ((temp*((float)9/(float)5))+32));
	}
	else
		printf("Incorrect input.\n");
	return 0;
}