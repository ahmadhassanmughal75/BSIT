#include<stdio.h>

int main() {

	int ac = 0, bc = 0, cc = 0, dc = 0, g;
	
	while((g = getchar()) != EOF) {
		
		switch(g) {
			case 'A':
			case 'a':
				ac++;
			break;
			case 'B':
			case 'b':
				bc++;
			break;
			case 'C':
			case 'c':
				cc++;
			break;
			case 'D':
			case 'd':
				dc++;
			break;
		}
	}
	
	printf("ac = %d\nbc = %d\ncc = %d\ndc = %d\n", ac, bc, cc, dc);

	return 0;
}

