#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int main(void) {

	int count = 14;
	int* pCount = &count;

	printf("address of count: %p, value: %d\n", &count,count);

	printf("address of pCount: %p, value: %d\n", &pCount, *pCount);

	return 0;
}