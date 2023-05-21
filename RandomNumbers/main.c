#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void) {

	srand(time(0));

	int a = -10;
	int b = 20;

	int rn1 = (rand() % (b - a + 1)) + a;
	int rn2 = (rand() % b) + a;

	printf("(rand() %% (b - a + 1)) + a: %-12d\n", rn1);
	printf("(rand() %% b) + a: %d\n", rn2);

	return 0;
}