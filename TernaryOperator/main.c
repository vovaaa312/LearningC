#include <stdio.h>

int findMax(int x, int y) {
	//if (x > y)return x;
	//else return y;

	return (x > y) ? x : y;
}

int main(void) {

	int max = findMax(9,15);

	printf("%d", max);

	return 0;
}