#include <stdio.h>
#include <string.h>
int main()
{
	int size;
	char firstName[20], lastName[20];
	printf("Enter First Name: ");
	gets(firstName);
	printf("Enter Last Name: ");
	gets(lastName);
	strcat(firstName, lastName);
	size = strlen(firstName);
	for(int i = size; i >= 0; i--)
	{
		printf("%c", firstName[i]);
	}
	return 0;
}