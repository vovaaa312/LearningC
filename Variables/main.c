#include <stdio.h>
#include <stdbool.h>

int main(void) {
	printf("=== VARIABLES === \n\n");

	int int_val = 15;
	float float_val = 15.5;
	double double_val = 3.141593;
	char char_val = 'C';
	char string_val[] = "John Doe";

	bool boolVal = true;
	
	char int_in_char = 100;

	printf("Int value: %d\n", int_val);
	printf("Float value: %.3f\n", float_val);
	printf("Double value: %.5lf\n", double_val);
	printf("Char value: %c\n", char_val);
	printf("String value: %s\n", string_val);
	printf("Boolean value: %d\n", boolVal);
	printf("Number of char: %d, char of number: %c\n", int_in_char, int_in_char);


	return 0;
}