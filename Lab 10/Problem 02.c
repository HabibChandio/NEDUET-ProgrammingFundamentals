#include <stdio.h>

typedef struct{
	int areaCode;
	int exchange;
	int number;
}phone;

int main(){
	phone myNumber, userNumber;
	myNumber.areaCode = 212;
	myNumber.exchange = 767;
	myNumber.number = 8900;
	printf("Enter area code: ");
	scanf("%d", &userNumber.areaCode);
	printf("Enter exchange: ");
	scanf("%d", &userNumber.exchange);
	printf("Enter number: ");
	scanf("%d", &userNumber.number);
	printf("My Number: (%d) %d-%d\n", myNumber.areaCode, myNumber.exchange, myNumber.number);
	printf("Your Number: (%d) %d-%d\n", userNumber.areaCode, userNumber.exchange, userNumber.number);
	return 0;
}