#include <stdio.h>
int main(void)
{
	char coffee, size;
	float waterTime, sugarTime, mix1, addCoffee, addMilk, mix2, totalTime;
	printf("Which coffee would you like.(B-Black, W-White): ");
	scanf("%c", &coffee);
	if(coffee != 'W'&&coffee != 'B')
	{
		printf("Error: Invalid Input.\n");
		return 0;
	}
	printf("In which size.(D-Double, M-Manual): ");
	scanf(" %c", &size);
	if(size != 'D'&&size != 'M')
	{
		printf("Error: Invalid Input.\n");
		return 0;
	}
	switch(coffee)
	{
		case 'W':
			waterTime = 15;
			sugarTime = 15;
			mix1 = 20;
			addCoffee = 2;
			addMilk = 4;
			mix2 = 20;
			switch(size)
			{
				case 'D':
					waterTime += waterTime*0.5;
					sugarTime += sugarTime*0.5;
					mix1 += mix1*0.5;
					addCoffee += addCoffee*0.5;
					addMilk += addMilk*0.5;
					mix2 += mix2*0.5;
					break;
			}
			break;
		case 'B':
			waterTime = 20;
			sugarTime = 20;
			mix1 = 25;
			addCoffee = 15;
			addMilk = 0;
			mix2 = 25;
			switch(size)
			{
				case 'D':
					waterTime += waterTime*0.5;
					sugarTime += sugarTime*0.5;
					mix1 += mix1*0.5;
					addCoffee += addCoffee*0.5;
					addMilk += addMilk*0.5;
					mix2 += mix2*0.5;
					break;
			}
			break;
	}
	totalTime = waterTime+sugarTime+mix1+addCoffee+addMilk+mix2;
	printf("Put Water: %0.1f mins\nPut Sugar: %0.1f mins\nMix Well: %0.1f mins\nAdd Coffee: %0.1f mins\nAdd Milk: %0.1f mins\nMix Well: %0.1f mins\nTotal Time: %0.1f", waterTime, sugarTime, mix1, addCoffee, addMilk, mix2, totalTime);
	return 0;
}