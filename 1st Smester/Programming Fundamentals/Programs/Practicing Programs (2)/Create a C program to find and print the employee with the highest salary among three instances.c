#include<stdio.h>
#include<string.h>

struct employee {
	char name[50];
	float salary;
};

struct employee maxSalaryEmp(struct employee e1, struct employee e2, struct employee e3);

int main() {
	
	struct employee e1, e2, e3, e4_Taker;
	
	strcpy(e1.name, "Umair Malik");
	e1.salary = 10.26;
	
	printf("\n\n:: Emplpoyee 1 ::\n");
	printf("Name: %s\n", e1.name);
	printf("Salary: %.2f\n", e1.salary);
	
	
	
	strcpy(e2.name, "Talha Malik");
	e2.salary = 14.99;
	
	printf("\n\n:: Emplpoyee 2 ::\n");
	printf("Name: %s\n", e2.name);
	printf("Salary: %.2f\n", e2.salary);
	
	
	
	strcpy(e3.name, "Baber Azam");
	e3.salary = 14.73;
	
	printf("\n\n:: Emplpoyee 3 ::\n");
	printf("Name: %s\n", e3.name);
	printf("Salary: %.2f\n", e3.salary);
	
	e4_Taker = maxSalaryEmp(e1, e2, e3);
	
	printf("\n\n:: Employee with maximum Salary ::\n");
	printf("Name: %s\n", e4_Taker.name);
	printf("Salary: %.2f\n", e4_Taker.salary);
	
	return 0;
}

struct employee maxSalaryEmp(struct employee e1, struct employee e2, struct employee e3) {
	if(e1.salary > e2.salary) {
		if(e1.salary > e3.salary) {
			return e1;
		}
	}
	else if(e2.salary > e3.salary) {
		return e2;
	}
	else {
		return e3;
	}
}







