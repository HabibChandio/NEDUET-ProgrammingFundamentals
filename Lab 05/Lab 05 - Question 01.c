#include <stdio.h>
int main(void)
{
	char choice;
	printf("Are you sure to delete([Y/y]/[N/n]): ");
	scanf("%c", &choice);
	switch(choice)
	{
		case 'Y':
		case 'y':
			printf("Delete compeleted.\n");
			break;
		case 'N':
		case 'n':
			printf("Delete cancelled.\n");
			break;
		default:
			printf("Choose the right option.\n");
	}
	return 0;
}