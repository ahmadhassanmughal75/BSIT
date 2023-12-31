#include<stdio.h>

int fibSerRec(int n);

int main() {
	
	int howMany, i;
	
	printf("Enter how many fibonacci numbers you want: ");
	scanf("%d", &howMany);
	
	for(i = 1; i <= howMany; i++) {
		if(i == howMany) {
			printf("%d,...", fibSerRec(i));
		} else {
			printf("%d, ", fibSerRec(i));
		}
	}
	
	return 0;
}

int fibSerRec(int n) {
	if((n == 1) || (n == 2)) {
		return n - 1;
	}
	return fibSerRec(n - 2) + fibSerRec(n - 1);
}
