#include<stdio.h>
#include<string.h>

struct employee {
	char name[50];
	float salary;
};

struct employee highestSalaryDetector(struct employee emp1, struct employee emp2);

int main() {
	
	system("color a");

	struct employee e1, e2, resEmp;
	
	printf("Enter the name of the Employee 1 : ");
	fgets(e1.name, sizeof(e1.name), stdin);
	e1.name[strlen(e1.name) - 1] = '\0'; // for ignoring the new line character
	printf("Enter the salary of the Employee 1 : ");
	scanf("%f", &e2.salary);
	
	getchar();
	
	printf("Enter the name of the Employee 2 : ");
	fgets(e2.name, sizeof(e2.name), stdin);
	e2.name[strlen(e2.name) - 1] = '\0'; // for ignoring the new line character
	printf("Enter the salary of the Employee 2 : ");
	scanf("%f", &e2.salary);
	
	resEmp = highestSalaryDetector(e1, e2);
	
	printf("\n\n=> Employee With Highest Salary\nName: %s\nSalary: %.2f", resEmp.name, resEmp.salary);
	
	
//	printf("Employee 1\nName: %s\nSalary: %.2f\n\nEmployee 2\nName: %s\nSalary: %.2f", e1.name, e1.salary, e2.name, e2.salary);
	
	
	return 0;
}

struct employee highestSalaryDetector(struct employee emp1, struct employee emp2) {
	if (emp1.salary > emp2.salary) {
		return emp1;
	}
	else if (emp2.salary > emp1.salary) {
		return emp2;
	}
	else {
		
	}
}
