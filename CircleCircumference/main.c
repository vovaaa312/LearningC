
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("=== circle circumference === \n\n");

	const double PI = 3.14159;

	double radius;
	double circumference;
	double area;

	printf("Enter radius: ");
	scanf("%lf", &radius);

	circumference = 2 * PI * radius;
	area = PI * radius * radius;

	printf("circumference = %lf\n", circumference);
	printf("area = %lf\n", area);


	return 0;
}