#include<stdio.h>

int main() {
	
	int ans, rat, freq[10] = {0}, resp[10];
	
	for(ans = 0; ans < 10; ans++) {
		printf("Enter your number %d : ", ans+1);
		scanf("%d", &resp[ans]);
		
		if (resp[ans] < 1) {
			printf("WARNING! Out of Range. Input numbers form start (Again)\n");
			ans = -1;
		}
		else if (resp[ans] > 10) {
			printf("\nWARNING! Out of Range (1-10).\nInput numbers form start (Again)\n\n");
			ans = -1;
		}
	}
	
	for(ans = 0; ans < 10; ans++) {
		freq[resp[ans]-1]++;
	}
	
	printf("Rating\tFrequency\n");
	
	for(rat = 0; rat < 10; rat++) {
		printf("%d\t%d\n", rat+1, freq[rat]);
	}

	return 0;
}
