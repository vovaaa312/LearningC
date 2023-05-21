
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {
	printf("=== calculator === \n\n");

	double a;
	double b;
	double res;
	char act = ' ';
	bool exit = false;


	while (act != 'X') {
		printf("Choose act: +, -, *, / \n");
		printf("X - exit\n:");

		scanf("%c", &act);
		switch (act)
		{
		case '+': {
			printf("A = \n:");
			scanf("%lf", &a);
			printf("B = \n:");
			scanf("%lf", &b);
			res = a + b;
			printf("%lf\n", res);
			break;
		}
		case '-': {
			printf("A = \n:");
			scanf("%lf", &a);
			printf("B = \n:");
			scanf("%lf", &b);
			res = a - b;
			printf("%lf\n", res);
			break;
		}
		case '*': {
			printf("A = \n:");
			scanf("%lf", &a);
			printf("B = \n:");
			scanf("%lf", &b);
			res = a * b;
			printf("%lf\n", res);
			break;
		}
		case '/': {
			printf("A = \n:");
			scanf("%lf", &a);
			printf("B = \n:");
			scanf("%lf", &b);
			res = a / b;
			printf("%lf\n", res);

			break;
		}
		case 'X': {
			printf("Goodbye!");
			break;
		}

		default:
			printf("Invalid input: %c\n", act);
			break;
		}
	}
	


	return 0;
}
