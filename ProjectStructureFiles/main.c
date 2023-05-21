#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#include "mathematic.h"

#include "human.h"
#include "human.c"

int main(void) {
	printf("%d\n", plus(5,5));
	printf("%d\n", minus(5, 5));
	printf("%d\n", square(5));

	Human h1 = {"Vladimir"};
	printf("h1.name: %s\n", h1.name);
	return 0;
}