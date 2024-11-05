#include<stdio.h>

typedef struct{
	int id;
	char name[20];
	int salary;
	char department[30];
}employee;

int main(){
	employee emp;
	
	printf("Enter employee's id: ");
	scanf("%d", &emp.id);
	printf("Enter employee's name: ");
	getchar();
	gets(emp.name);
	printf("Enter employee's salary: ");
	scanf("%d", &emp.salary);
	printf("Enter employee's department: ");
	getchar();
	gets(emp.department);
	
	printf("Employee 1:\n\tID: %d\n\tName: %s\n\tSalary: %d\n\tDepartment: %s\n", emp.id, emp.name, emp.salary, emp.department);
	return 0;
}