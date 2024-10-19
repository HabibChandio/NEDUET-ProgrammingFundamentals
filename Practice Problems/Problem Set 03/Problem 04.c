#include <stdio.h>
#include <string.h>
int main()
{
	int size;
	char str[100];
	printf("Enter: ");
	gets(str);
	size = strlen(str);
	int freq[size];
	for(int i = 0; i < size; i++)
	{
		freq[i] = 1;
	}
	for(int i = 0; i < size-1; i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
				str[i] = (int)str[i] + 32;
		for(int j = i+1; j < size; j++)
		{
			if(str[i] == str[j])
			{
				for(int k = j; k < size; k++)
				{
					str[k] = str[k+1];
				}
				freq[i]++;
				j--;
				size--;
			}
		}
	}
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
			printf("Space: %d time(s)\n", freq[i]);
		else
			printf("%c: %d time(s)\n", str[i], freq[i]);
	}
	return 0;
}