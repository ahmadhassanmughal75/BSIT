#include<stdio.h>

int main() {
	
	int userNeed, i, j, count = 0;
	
	printf("Enter how many prime numbers you want: ");
	scanf("%d", &userNeed);
	
	if(userNeed < 1) {
		printf("Error!\n");
	}
	else {
		for(i = 2; 1; i++) {
			int flag = 0;
			
			for(j = 2; j < i; j++) {
				if(i % j == 0) {
					flag = 1;
					break;
				}
			}
			
			if(flag == 0) {
				printf("%d ", i);
				count++;
			}
			if(count == userNeed) {
				break;
			}
		}
	}
	
	return 0;
}

