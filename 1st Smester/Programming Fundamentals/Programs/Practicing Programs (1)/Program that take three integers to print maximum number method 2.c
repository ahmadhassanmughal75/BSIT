#include<stdio.h>

int main() {

	int n1, n2, n3;
	
	printf("Enter three numbers:\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	
	if(n1 >= n2) {
		if(n1 >= n3) {
			printf("Maximum No. %d\n", n1);
		}
	}
	else if(n2 >= n3) {
		printf("Maximum No. %d\n", n2);
	}
	else {
		printf("Maximum No. %d\n", n3);
	}
	
	return 0;
}

