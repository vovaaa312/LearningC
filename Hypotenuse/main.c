#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void) {
	printf("=== hypotenuse === \n\n");

	double A;
	double B;
	double C;

	printf("A:\n");
	scanf("%lf", &A);
	printf("B:\n");
	scanf("%lf", &B);

	C = sqrt(A*A + B*B);
	printf("C: %lf\n", C);

	



	return 0;
}