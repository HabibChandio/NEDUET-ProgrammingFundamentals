#include <stdio.h>
#include <string.h>

typedef struct{
	char name[20];
	float gpa;
}course;

typedef struct{
	char street[20];
	char city[20];
	char state[20];
	int zip; 
}address;


typedef struct{
	float cgpa;
	course crs1;
	course crs2;
	address adr;
}student;

int main(){
	student std1, std2;
	
	std1.cgpa = 4.0;
	strcpy(std1.crs1.name, "PF");
	std1.crs1.gpa = 3.9;
	strcpy(std1.crs2.name, "FIT");
	std1.crs2.gpa = 4.0;
	strcpy(std1.adr.street, "B29");
	strcpy(std1.adr.city, "Hyderabad");
	strcpy(std1.adr.state, "Sindh");
	std1.adr.zip = 71000;
	
	std2.cgpa = 3.2;
	strcpy(std2.crs1.name, "PF");
	std2.crs1.gpa = 3.5;
	strcpy(std2.crs2.name, "FIT");
	std2.crs2.gpa = 2.9;
	strcpy(std2.adr.street, "D-23");
	strcpy(std2.adr.city, "Hyderabad");
	strcpy(std2.adr.state, "Sindh");
	std2.adr.zip = 71000;
	
	if(std1.crs1.gpa > std2.crs1.gpa)
		printf("student 1 has greater gpa in %s\n", std1.crs1.name);
	else if(std1.crs1.gpa < std2.crs1.gpa)
		printf("student 2 has greater gpa in %s\n", std1.crs1.name);
	else
		printf("equal in %s\n", std1.crs1.name);
		
	if(std1.crs2.gpa > std2.crs2.gpa)
		printf("student 1 has greater gpa in %s\n", std1.crs2.name);
	else if(std1.crs2.gpa < std2.crs2.gpa)
		printf("student 2 has greater gpa in %s\n", std1.crs2.name);
	else
		printf("equal in %s\n", std1.crs2.name);
		
	if(std1.cgpa > std2.cgpa)
		printf("student 1 has higher cgpa.\n");
	else if(std1.cgpa < std2.cgpa)
		printf("student 2 has higher cgpa.\n");
	else
		printf("Equal cgpa.\n");
		
	return 0;
}