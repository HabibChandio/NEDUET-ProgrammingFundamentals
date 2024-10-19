#include <stdio.h>
int main()
{
	int size, vowel = 0, consonant = 0;
	char str[100];
	printf("Enter the string: ");
	gets(str);
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' ||str[i] == 'O' || str[i] == 'u' || str[i] == 'u')
			vowel++;
		else if(str[i] == ' ')
			continue;
		else
			consonant++;
	}
	printf("Vowels = %d\nConsonants = %d\n", vowel, consonant);
	return 0;
}