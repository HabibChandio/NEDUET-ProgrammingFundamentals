#include <stdio.h>
int main(void)
{
	int nts, fsc;
	printf("Enter your nts marks: ");
	scanf("%d", &nts);
	printf("Enter your fsc marks: ");
	scanf("%d", &fsc);
	if(fsc>70&&nts>=50)
	{
		if(nts>=70)
			printf("You can get IT department in Oxford University.\n");
		else if(nts>=60)
			printf("You can get Electronics department in Oxford University.\n");
		else
			printf("You can get Telecommunication department in Oxford University.\n");
	}
	else if(fsc>40&&nts>=50)
	{
		if(fsc>=60)
			printf("You can get IT department in MIT University.\n");
		else if(fsc>=50)
			printf("You can get Chemical department in MIT University.\n");
		else
			printf("You can get Computer department in MIT University.\n");
	}
	else
		printf("You don't qualify for neiter Oxford or Mit.\n");
	return 0;
}