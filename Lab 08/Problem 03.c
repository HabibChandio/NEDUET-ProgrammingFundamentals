#include <stdio.h>
#include <string.h>
int main()
{
	int cmp;
	char str1[100], str2[100];
	printf("Enter string 1: ");
	gets(str1);
	printf("Enter string 2: ");
	gets(str2);
	cmp = strcmp(str1, str2);
	if(cmp > 0)
		printf("%s is greater than %s.\n", str1, str2);
	else if(cmp < 0)
		printf("%s is greater than %s.\n", str2, str1);
	else
		printf("%s and %s are equal.\n", str1, str2);
	return 0;
}