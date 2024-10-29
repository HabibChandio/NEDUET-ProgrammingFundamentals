#include <stdio.h>

float volumeCal(float height, float area);
float getData();

int main(){
	printf("Volume: %.3f", getData());
	return 0;
}

float getData(){
	float height, area;
	printf("Enter height: ");
	scanf("%f", &height);
	printf("Enter area: ");
	scanf("%f", &area);
	return volumeCal(height, area);
}

float volumeCal(float height, float area){
	return (area * height) / 3;
}