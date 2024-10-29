#include <stdio.h>
#include <math.h>

float convert(float num);

int main(){
	float whole, fracPart;
	printf("Enter whole part: ");
	scanf("%f", &whole);
	printf("Enter fractional part (decimal - start with '.'): ");
	scanf("%f", &fracPart);
	whole += fracPart;
	printf("%.2f", convert(whole));
}

float convert(float num){
   return round(num*100)/100.0;
}