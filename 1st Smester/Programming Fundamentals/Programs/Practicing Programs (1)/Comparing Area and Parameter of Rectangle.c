#include<stdio.h>

int main() {

	float rectLength, rectWidth, rectArea, rectPara;
	
	printf("Enter length of Rectangle: ");
	scanf("%f", &rectLength);
	printf("Enter width of Rectangle: ");
	scanf("%f", &rectWidth);
	
	rectArea = rectLength * rectWidth;
	rectPara = 2 * (rectLength + rectWidth);
	
	if(rectArea > rectPara) {
		printf("%.2f(area) is greater than %.2f(parameter)\n", rectArea, rectPara);
	}
	else {
		printf("%.2f(parameter) is greater than %.2f(area)\n", rectPara, rectArea);
	}
	
	return 0;
}

