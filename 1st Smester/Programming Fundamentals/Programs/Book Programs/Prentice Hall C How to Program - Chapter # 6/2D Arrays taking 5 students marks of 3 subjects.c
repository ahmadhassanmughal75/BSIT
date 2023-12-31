#include<stdio.h>
#define STUDENTS 3
#define SUBJECTS 3

int main() {
	
	int student, subject, sheet[STUDENTS][SUBJECTS], rows, columns;
	
	
	// Taking input from user for 2 Dimensional Array
	for(student = 0; student < STUDENTS; student++) {
		
		for(subject = 0; subject < SUBJECTS; subject++) {
			printf("Enter the marks of student %d & subject %d : ", student+1, subject+1);
			scanf("%d", &sheet[student][subject]);
			
			if(sheet[student][subject] < 1) {
				printf("\nWARNING! Out of Range(1-100).\nInput from start (Again)\n\n");
				subject = -1;
			}
			else if (sheet[student][subject] > 100) {
				printf("\nWARNING! Out of Range(1-100).\nInput from start (Again)\n\n");
				subject = -1;
			}
		}
		
		printf("\n");
	}
	
	// Printing the 2-Dimensional Array
	for(rows = 0; rows < STUDENTS; rows++) {
		
		printf("Student %d => ", rows+1);
		
		for(columns = 0; columns < SUBJECTS; columns++) {
			printf("%d     ", sheet[rows][columns]);
		}
		
		printf("\n");
	}

	return 0;
}

