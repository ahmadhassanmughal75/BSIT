#include<stdio.h>
#include<conio.h>

int main() {
	
	int s, i, j;
	
	for(i = 1; i <= 5; i++) {
		
		// loop for starting spaces
		for(s = i; s < 5; s++) {
			printf(" ");
		}
		
		// Loop for printing digits and b/w spaces
		for(j = 1; j <= i; j++) {
			printf("%d ", i);
		}
		
		// switch to next row (to end the row)
		printf("\n");
	}
	
	return 0;
}
