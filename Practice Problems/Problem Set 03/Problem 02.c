#include <stdio.h>
int main()
{
	int size = 0, check = 0;
	char str[100];
	printf("Enter string: ");
	gets(str);
	for(int i = 0; str[i] != '\0'; i++)
	{	
		size++;
		if(str[i] >= 65 && str[i] <= 90)
			str[i] = (int)str[i] + 32;
		else if(str[i] == ' ')
		{
			for(int j = i; str[j] != '\0'; j++)
			{
				str[j] = str[j+1];
				size--;
				i--;
			}
		}
	}
	
	for(int i = 0; i < size/2; i++)
	{
		if(str[i] == str[size-(i+1)])
			check++;
	}
	if(check == size/2)
		printf("String is a Palindrome.\n");
	else
		printf("String is not a Palindrome.\n");
	return 0;
}