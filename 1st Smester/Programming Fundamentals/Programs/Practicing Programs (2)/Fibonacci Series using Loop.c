#include<stdio.h>

int main() {
	
	int howMany, i, prev, next;
	
	printf("Enter how many fabinacci numbers you want: ");
	scanf("%d", &howMany);
	
	for(i = 1; i <= howMany; i++) {
		if(i == 1) {
			printf("%d, ", i-1);
			prev = i - 1;
			continue;
		}
		else if(i == 2) {
			printf("%d, ", i-1);
			next = i - 1;
			continue;
		}
		int temp = next;
		next = next + prev;
		prev = temp;
		if(i == howMany) {
			printf("%d,...", next);
		} else {
			printf("%d, ", next);
		}
	}
	
	return 0;
}

