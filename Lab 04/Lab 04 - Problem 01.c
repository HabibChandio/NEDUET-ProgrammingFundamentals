#include <stdio.h>

int main(void)
{
	int character;
	printf("Input charater: ");
	scanf("%c", &character);
	if(character>=48&&character<=57)
		printf("Your character is a digit.\n");
	else if(character>=65&&character<=90)
		printf("Your character is a capital alphabet.\n");
	else if(character>=97&&character<=122)
		printf("Your character is a small alphabet.\n");
	else
		printf("Your character is a special character.\n");
	return 0;
}