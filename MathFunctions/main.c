#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
	printf("=== MATH FUNCTIONS === \n\n");

	double A = sqrt(9);
	printf("sqrt(9) = %lf\n", A);
	A = sqrt(25);
	printf("sqrt(25) = %lf\n\n", A);

	double B = pow(2, 4);
	printf("pow(2, 4) = %lf\n", B);
	B = pow(3, 2);
	printf("pow(3, 2) = %lf\n\n", B);

	int C = round(3.14);
	printf("round(3.14) = %d\n", C);
	C = round(2.7182818284);
	printf("round(2.7182818284) = %d\n\n", C);

	int D = ceil(3.14);
	printf("ceil(3.14) = %d\n", D);
	D = ceil(2.7182818284);
	printf("ceil(2.7182818284) = %d\n\n", D);

	int E = floor(3.14);
	printf("floor(3.14) = %d\n", E);
	E = floor(2.7182818284);
	printf("ceil(2.7182818284) = %d\n\n", E);

	double F = fabs(-3.14);
	printf("fabs(-3.14) = %f\n", F);
	F = fabs(-2.7182818284);
	printf("fabs(-2.7182818284) = %f\n\n", F);

	double G = log(10);
	printf("log(10) = %f\n", G);
	G = log(100);
	printf("log(100) = %f\n\n", G);

	double H = sin(0);
	printf("sin(0) = %f\n", H);
	H = sin(30);
	printf("sin(30) = %f\n", H);
	H = sin(45);
	printf("sin(45) = %f\n", H);
	H = sin(60);
	printf("sin(60) = %f\n", H);
	H = sin(90);
	printf("sin(90) = %f\n\n", H);





	return 0;
}