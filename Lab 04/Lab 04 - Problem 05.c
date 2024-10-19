#include <stdio.h>

int main(void)
{
	float cal, fat, fat_cal, fat_cal_percent;
	printf("Input calories of food: ");
	scanf("%f", &cal);
	if(cal<1)
	{
		printf("Error: Invalid Input.\n");
		return 0;
	}	
	printf("Input fat of food(in grams): ");
	scanf("%f", &fat);
	if(fat<0)
	{
		printf("Error: Invalid Input.\n");
		return 0;
	}
	fat_cal = fat*9;
	fat_cal_percent = (fat_cal/cal)*100;
	if(fat_cal>cal)
	{
		printf("Error: Either calories or fat were incorrectly entered.\n");
		return 0;
	}
	printf("Percentage of calories from fat: %0.2f%%", fat_cal_percent);
	if(fat_cal_percent<30)
	{
		printf("The food is low in fats");	
	}	
	return 0;
}