#include<stdio.h>

int main() {

	char day;
	
	printf("Enter your Day : ");
	scanf("%c", &day);
	
	while (day != EOF) { // To Use EOF(end-of-file) command Ctrl + Z is used
		
		printf("Enter your Day : ");
		scanf("%c", &day);
	
	switch(day) {
		case 'M':
			printf("Its Monday.\n");
			break;
		case 'T':
			printf("Its Tuesday.\n");
			break;
		case 'W':
			printf("Its Wednesday.\n");
			break;
		case 't':
			printf("Its Thursday.\n");
			break;
		case 'F':
			printf("Its Friday.\n");
			break;
		case 'S':
			printf("Its Saturday.\n");
			break;
		case 's':
			printf("Its Sunday.\n");
			break;
		default:
			printf("You entered the wrong day!!!\n");
	}
	}
	return 0;
}

