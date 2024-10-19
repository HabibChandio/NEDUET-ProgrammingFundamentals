#include <stdio.h>

int main(void)
{
	float hours, distance, speed;
	printf("Input hours travelled(+1 - +5): ");
	scanf("%f", &hours);
	printf("Input distance travelled(in miles, +ve): ");
	scanf("%f", &distance);
	speed = distance/hours;
	printf("Speed: %f mph.\n", speed);
	return 0;
}