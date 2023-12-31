#include<stdio.h>

int main() {
	
	float x, y, a;
	int xCount = 0, yCount = 0, xPosi = 0, yPosi = 0, xNeg = 0, yNeg = 0, xOnlyOne = 0;
	
	for(y = 1.5; y > -1; y -= 0.1) {
//		yCount++;
//		if(y > 0) {
//			yPosi++;
//		}
//		else if(y < 0) {
//			yNeg++;
//		}
		for(x = -1.5; x < 1.5; x += 0.05) {
//			xCount++;
//			if(y == 1.5 && x > 0) {
//				xPosi++;
//			}
//			else if(y == -0.1 && x < 0) {
//				xNeg++;
//			}
//			if(y == 1.5) {
//				xOnlyOne++;
//			}
			a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0?'*':' ');
		}
		system("color 04");
		putchar('\n');
	}
//	printf("yLoop = %d\nyPosi = %d\nyNeg = %d\nxLoop = %d\nxPosi = %d\nxNeg = %d\nxForOnlyOneRow = %d\n", yCount, yPosi, yNeg, xCount, xPosi, xNeg, xOnlyOne);
	scanf("%f");

	return 0;
}
