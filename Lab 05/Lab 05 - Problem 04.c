#include <stdio.h>

int main(void)
{
	char s1, s2, s3, s4;
	int types, amt1, amt2, amt3, amt4, cost1, cost2, cost3, cost4, total;
	printf("\t\t\t\tHabibi Restaurant Online Order Placement.\n\t\t\t\t\tWELCOME!.\n");
	printf("Please select from the following Menu:\nB= Burger\nF= Fries\nP= Pizza\nS= Sandwich\n");
	printf("How many types of snacks you need to order: ");
	scanf("%d", &types);
	if(types>0&&types<5)
	{
		printf("Enter first Snack you want to order: ");
		scanf(" %c", &s1);
		printf("Please provide quantity: ");
		scanf(" %d", &amt1);
		if(types>1)
		{
			printf("Enter second Snack you want to order: ");
			scanf(" %c", &s2);
			printf("Please provide quantity: ");
			scanf(" %d", &amt2);
			if(types>2)
			{
				printf("Enter third Snack you want to order: ");
				scanf(" %c", &s3);
				printf("Please provide quantity: ");
				scanf(" %d", &amt3);
				if(types>3)
				{
					printf("Enter fourth Snack you want to order: ");
					scanf(" %c", &s4);
					printf("Please provide quantity: ");
					scanf(" %d", &amt4);
				}
			}
		}
	}
	else
		printf("Invalid Input.");
	printf("----------------------------------\n");
	printf("You have ordered!\n");
	if(types>0&&types<5)
	{
		switch(s1)
		{
			case 'B':
				cost1 = 200;
				printf("%d Burger (s) value %d PKR\n", amt1, amt1*cost1);
				break;
			case 'F':
				cost1 = 50;
				printf("%d Fries (s) value %d PKR\n", amt1, amt1*cost1);
				break;
			case 'P':
				cost1 = 500;
				printf("%d Pizza (s) value %d PKR\n", amt1, amt1*cost1);
				break;
			case 'S':
				cost1 = 150;
				printf("%d Sandwich (s) value %d PKR\n", amt1, amt1*cost1);
				break;
		}
		if(types>1)
		{
			switch(s2)
			{
				case 'B':
					cost2 = 200;
					printf("%d Burger (s) value %d PKR\n", amt2, amt2*cost2);
					break;
				case 'F':
					cost2 = 50;
					printf("%d Fries (s) value %d PKR\n", amt2, amt2*cost2);
					break;
				case 'P':
					cost2 = 500;
					printf("%d Pizza (s) value %d PKR\n", amt2, amt2*cost2);
					break;
				case 'S':
					cost2 = 150;
					printf("%d Sandwich (s) value %d PKR\n", amt2, amt2*cost2);
					break;
			}
			if(types>2)
			{	
				switch(s3)
				{
					case 'B':
						cost3 = 200;
						printf("%d Burger (s) value %d PKR\n", amt3, amt3*cost3);
						break;
					case 'F':
						cost3 = 50;
						printf("%d Fries (s) value %d PKR\n", amt3, amt3*cost3);
						break;
					case 'P':
						cost3 = 500;
						printf("%d Pizza (s) value %d PKR\n", amt3, amt3*cost3);
						break;
					case 'S':
						cost3 = 150;
						printf("%d Sandwich (s) value %d PKR\n", amt3, amt3*cost3);
						break;
				}
				if(types>3)
				{
					switch(s4)
					{
						case 'B':
							cost4 = 200;
							printf("%d Burger (s) value %d PKR\n", amt4, amt4*cost4);
							break;
						case 'F':
							cost4 = 50;
							printf("%d Fries (s) value %d PKR\n", amt4, amt4*cost4);
							break;
						case 'P':
							cost4 = 500;
							printf("%d Pizza (s) value %d PKR\n", amt4, amt4*cost4);
							break;
						case 'S':
							cost4 = 150;
							printf("%d Sandwich (s) value %d PKR\n", amt4, amt4*cost4);
							break;
					}	
				}
			}
		}
	}
	total = (amt1*cost1)+(amt2*cost2)+(amt3*cost3)+(amt4*cost4);
	printf("Total: %d PKR\n", total);
	printf("Thank you for your order... Have a nice day!\n");
	return 0;
}