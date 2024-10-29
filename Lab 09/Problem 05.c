#include <stdio.h>

int getInt(char* name);
float getFloat(char* name);
void fiveYearCost(int houseCost, int fuelCost, float taxRate);

int main(){
	int houseCost = getInt("house cost");
	int fuelCost = getInt("fuel cost");
	float taxRate = getFloat("tax rate");
	fiveYearCost(houseCost, fuelCost, taxRate);
	return 0;
}

int getInt(char* name){
	int input;
	printf("Enter %s: ", name);
	scanf("%d", &input);
	return input;
}

float getFloat(char* name){
	float input;
	printf("Enter %s: ", name);
	scanf("%f", &input);
	return input;
}

void fiveYearCost(int houseCost, int fuelCost, float taxRate){
	printf("Total house cost after a five year period: %.2f", (houseCost) + (fuelCost * 5) + (houseCost * taxRate * 5));
}