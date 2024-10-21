#include <stdio.h>
#include <string.h>
int main()
{
	char name[100], course[50];
	int size;
	printf("Enter your name: ");
	gets(name);
	printf("Enter course name: ");
	gets(course);
	strcat(name, course);
	size = strlen(name);
	int freq[size];
	printf("\n");
	puts(name);
	for(int i = 0; i < size; i++)
	{
		freq[i] = 1;
		for(int j = i+1; j < size; j++)
		{
			if(name[i] == name[j])
			{
				for(int k = j; k < size; k++)
				{
					name[k] = name[k+1];
				}
				freq[i]++;
				j--;
				size--;
			}
		}
	}
	for(int i = 0; i < size; i++)
	{
		if(name[i] == ' ')
			printf("space: %d time(s).\n", freq[i]);
		else
			printf("%c: %d time(s).\n", name[i], freq[i]);
	}
	return 0;
}