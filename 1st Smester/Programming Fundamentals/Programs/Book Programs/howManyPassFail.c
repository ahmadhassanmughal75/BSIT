#include<stdio.h>

int main() {
	
	int student = 1, passes = 0, failed = 0, result;
	
	while (student <= 10) {
		printf("Enter result (1 = Pass & 2 = Fail) : ");
		scanf("%d", &result);
		
		if (result != 0) {
			passes += 1;
		} else {
			failed += 1;
		}
		student++;
	}
	
	printf("Passed %d\n", passes);
	printf("Failed %d\n", failed);
	
	if (passes >= 8) {
		printf("Bonus to intructor!\n");
	}
	
	return 0;
}
