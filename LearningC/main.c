#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
	printf("=== USER INPUT === \n\n");


	/*int int_input;
	printf("Int input: ");
	scanf("%d", &int_input);
	printf("Our int input: %d\n", int_input);

	char string_input_no_spaces[15];
	printf("String input without spaces: ");
	scanf("%s", &string_input_no_spaces);
	printf("Our string input without spaces: %s\n", string_input_no_spaces);*/


	char string_input_spaces[15];
	printf("String input with spaces: ");
	fgets(string_input_spaces, 15, stdin);
	string_input_spaces[strlen(string_input_spaces)-1] = '\0';
	printf("Our string input with spaces: %s, some text after string\n", string_input_spaces);

	return 0;
}