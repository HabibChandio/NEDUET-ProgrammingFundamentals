#include <stdio.h>

int main(void)
{
	int salary;
	float tax_rate, tax, salary_left;
	printf("Input salary: ");
	scanf("%d", &salary);
	printf("Input tax rate(in percentage): ");
	scanf("%f", &tax_rate);
	tax = salary*(tax_rate/100);
	salary_left = salary-tax;
	printf("You have to pay %f as tax.\nYou will have %f left over after tax.\n", tax, salary_left);
	return 0;
}