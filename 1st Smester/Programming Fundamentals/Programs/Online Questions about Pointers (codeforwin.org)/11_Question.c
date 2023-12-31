// Q # 11 :: Write a C program to multiply two matrix using pointers.

#include<stdio.h>

int main() {
	
	// Taking values of rows and columns for matrixes ('i' is a counter)
	int r, c, i;
	printf("Enter the size of Matrix : \nRow : ");
	scanf("%d", &r);
	printf("Column : ");
	scanf("%d", &c);
	
	int matrix1[r][c], *mtr1_ptr = matrix1; // declaring matrix 1 & pointer for it
	
	
	printf("\n=> For Matrix 1 (below)\n\n"); // taking input from user for matrix 1
	
	for (i = 0; i < (r*c); i++) {
		printf("Enter value %d : ", i + 1);
		scanf("%d", mtr1_ptr + i);
	}
	
	
	int matrix2[r][c], *mtr2_ptr = matrix2; // declaring matrix 2 & pointer for it
	
	
	printf("\n\n=> For Matrix 2 (below)\n\n"); // taking input from user for matrix 2
	
	for (i = 0; i < (r*c); i++) {
		printf("Enter value %d : ", i + 1);
		scanf("%d", mtr2_ptr + i);
	}
	
	// result storing matrix & pointer for it
	int prodMatrix[r][c], *fpmtr_ptr = prodMatrix;
	
	
	printf("\n\n:: Matrix 1 ::"); // Printing matrix 1
	
	for (i = 0; i < (r*c); i++) {
		if(i % c == 0) {
			printf("\n\n");
		}
		printf("  %d  ", *(mtr1_ptr + i));
	}
	
	
	printf("\n\n\n:: Matrix 2 ::"); // Printing matrix 2
	
	for (i = 0; i < (r*c); i++) {
		if(i % c == 0) {
			printf("\n\n");
		}
		printf("  %d  ", *(mtr2_ptr + i));
	}
	
	
	// Sum operation performed on matrix1 & matrix2
	
	for (i = 0; i < (r*c); i++) {
		*(fpmtr_ptr + i) = *(mtr1_ptr + i) * *(mtr2_ptr + i);
	}
	
	
	
	printf("\n\n\n:: Product Matrix ::"); // Printing multiplication matrix (result)
	
	for (i = 0; i < (r*c); i++) {
		if(i % c == 0) {
			printf("\n\n");
		}
		printf("  %d  ", *(fpmtr_ptr + i));
	}

	return 0;
}
