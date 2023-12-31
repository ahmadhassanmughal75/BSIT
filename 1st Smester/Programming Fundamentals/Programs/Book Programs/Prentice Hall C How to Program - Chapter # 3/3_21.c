#include<stdio.h>

int main() {

	float totalHours, hourlyRate, salary;
	
	printf("Enter working hours (-1 to end) : ");
	scanf("%f", &totalHours);
	
	while (totalHours != -1) {
		printf("Enter hourly rate of the worker ($00.00) : ");
		scanf("%f", &hourlyRate);
		
		salary = totalHours * hourlyRate;
		printf("Salary is $%.2f\n\n\n", salary);
		
		printf("Enter working hours (-1 to end) : ");
		scanf("%f", &totalHours);
	}
	
	return 0;
}

