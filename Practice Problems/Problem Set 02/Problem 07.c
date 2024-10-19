#include <stdio.h>
int main(void)
{
	int input, consonants, vowels;
	char choice;
	do
	{
		printf("Enter a character: ");
		scanf(" %c", &input);
		if((input>64&&input<91)||(input>96&&input<123))
		{
			if((input==65||input==97)||(input==69||input==101)||(input==73||input==75)||(input==79||input==111)||(input==85||input==117))
			{
				vowels++;
			}
			else
			{
				consonants++;
			}
		}
		printf("Do you wish to continue? ( [Y/y] / [N/n] ): ");
		scanf(" %d", &choice);
	}while(choice!='Y'||choice!='y'||choice!='N'||choice!='N');
	printf("You entered %d vowels and %d consonants.\n", vowels, consonants);
	return 0;
}