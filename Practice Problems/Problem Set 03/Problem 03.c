#include <stdio.h>
int main()
{
	int length = 0;
	char str[100];
	printf("Enter: ");
	gets(str);
	for(int i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	printf("Length of string: %d", length);
	return 0;
}