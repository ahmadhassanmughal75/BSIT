#include<stdio.h>

struct employ {
	char name[100];
	float salary;
};

struct employ calcHighSalary(struct employ e1,struct employ e2,struct employ e3);

int main() {

	struct employ emp1, emp2, emp3, finalEmp;
	
	printf("Enter name of employ 1: ");
	fgets(emp1.name, sizeof(emp1.name), stdin);
	printf("Enter salary of employ 1:");
	scanf("%f", &emp1.salary);
	getchar();
	
	printf("Enter name of employ 2: ");
	fgets(emp2.name, sizeof(emp2.name), stdin);
	printf("Enter salary of employ 2:");
	scanf("%f", &emp2.salary);
	getchar();
	
	printf("Enter name of employ 3: ");
	fgets(emp3.name, sizeof(emp3.name), stdin);
	printf("Enter salary of employ 3:");
	scanf("%f", &emp3.salary);
	getchar();
	
	
//	printf("Name: %s\nSalary: %.2f\n\n\n", emp1.name, emp1.salary);
	
	finalEmp = calcHighSalary(emp1, emp2, emp3);
	
	printf("Name: %s\nSalary: %.2f\n", finalEmp.name, finalEmp.salary);

	return 0;
}

struct employ calcHighSalary(struct employ e1,struct employ e2,struct employ e3) {
	if(e1.salary >= e2.salary) {
		if(e1.salary >= e3.salary) {
			return e1;
		}
	}
	else if(e2.salary >= e3.salary) {
		return e2;
	}
	else {
		return e3;
	}
}
