#include <stdio.h>
int main()
{
	int hour, min, format, choice;
	do
	{
		printf("Enter hours: ");
		scanf("%d", &hour);
		printf("Enter min: ");
		scanf("%d", &min);
		if(hour >= 0 && hour < 12 && min >= 0 && min < 60)
			printf("%d:%d AM\n", hour, min);
		else if(hour > 0 && hour < 24 && min >= 0 && min < 60)
		{
			if(hour != 12)
				format = hour - 12; 
			else
				format = hour;
			printf("%d:%d PM\n", format, min);
		}
		else
			printf("Wrong Format!\n");
		printf("Continue? [(Q/q) - Discontinue, Any other character - Continue]: ");
		scanf(" %c", &choice);
	}while(choice != 'Q' && choice != 'q');
	return 0;
}