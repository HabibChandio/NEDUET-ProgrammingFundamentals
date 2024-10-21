#include <stdio.h>
#include <string.h>
int main()
{
	char a[11] = "hello world";
	int i;
	for(i = 0; i <= 9; i++)
	{	
		a[i] = a[i + 1];
		printf("%d \t %s \n", i, a);
	}
	printf("\n %d", a);
	return 0;
	/*
	output:
	
	0        eello world
	1        elllo world
	2        elllo world
	3        elloo world
	4        ello  world
	5        ello wworld
	6        ello woorld
	7        ello worrld
	8        ello worll
	9        ello worldd

	 6684177
	*/
}