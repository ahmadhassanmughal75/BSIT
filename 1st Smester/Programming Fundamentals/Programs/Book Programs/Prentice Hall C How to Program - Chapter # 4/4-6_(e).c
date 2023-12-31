#include<stdio.h>

int main() {
	
	int x;
	
	for(x = 12; x >= 2; x -= 3) {
		printf("%d\n", x);
	}

	return 0;
}

/*
Output is ::
12
9
6
3
*/
