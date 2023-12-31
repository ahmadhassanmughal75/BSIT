#include<stdio.h>

int main() {
	
	int seqLoop, i, new = 0, var1 = 0, var2 = 1;
	printf("Enter your number : ");
	scanf("%d", &seqLoop);
	
	printf("Fabonacci Sequence is ::\n0, 1, ");
	for(i = 1; i < (seqLoop-1); i++) {
		new = var2 + var1;
		if(i == (seqLoop-2)) {
			printf("%d,...\n", new);
		} else {
			printf("%d, ", new);
		}
		var1 = var2;
		var2 = new;
	}

	return 0;
}
