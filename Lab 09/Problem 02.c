#include <stdio.h>

void assignPosition(int marks);

int main(){
	int marks;
	printf("Enter marks obtained: ");
	scanf("%d", &marks);
	if(marks >= 50)
		assignPosition(marks);
	else
		printf("You don't qualify for any position.\n");
	return 0;
}

void assignPosition(int marks){
	if(marks >= 60){
		int exp;
		printf("Enter years of experience: ");
		scanf("%d", &exp);
		if(marks >= 70 && exp >= 2)
			printf("Assigned position: Associate Developer.\n");
		else if(exp >= 1)
			printf("Assigned position: Assistant Developer.\n");
		else
			printf("Assigned position: Trainee Engineer.\n");
	}
	else
		printf("Assigned position: Trainee Engineer.\n");
}