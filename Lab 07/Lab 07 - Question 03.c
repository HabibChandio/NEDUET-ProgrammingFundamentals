#include <stdio.h>

int main()
{
	char firstName[10], lastName[10], fullName[20];
	int a = 0, count = 0;
	printf("Enter first name: ");
	gets(firstName);
	printf("Enter last name: ");
	gets(lastName);
	for(int i = 0; firstName[i] != '\0'; i++)
	{
		fullName[i] = firstName[i];
		a = i;
	}
	fullName[a+1] = ' ';
	for(int j = 0; lastName[j] != '\0'; j++)
	{
		fullName[a+2+j] = lastName[j];
	}
	printf("Full Name: %s. ", fullName);
	for(int k = 0; fullName[k] != '\0'; k++)
	{
		count++;
	}
	printf("Total length of name: %d", count);
	return 0;
}