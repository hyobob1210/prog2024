#include <stdio.h>

int main()
{
	float weight, height;
	
	printf("몸무게(kg):");
	scanf_s("%f", &weight);
	
	printf("키(cm):");
	scanf_s("%f", &height);
	
	height /= 100;
	
	float bmi;
	printf("bmi:");
	printf("%0.1f", weight/(height * height));

}
