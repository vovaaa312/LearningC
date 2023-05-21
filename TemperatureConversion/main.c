
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void) {
	printf("=== temperature conversion === \n\n");

	char unit;
	float temp;
	float result;

	printf("F or C ?\n");
	scanf("%c", &unit);
	unit = toupper(unit);

	switch (unit)
	{
	case 'C':{
			printf("Enter temp in C:\n");
			scanf("%f", &temp);
			result = (temp * 9 / 5) + 32;
			printf("C = %.2f, F = %.2f", temp, result);
			break;
	}
	case 'F': {
		printf("Enter temp in F:\n");
		scanf("%f", &temp);
		result = ((temp - 32) * 5) / 9;
		printf("F = %.2f, C = %.2f", temp, result);
		break;
	}

	default:
		printf("Invalid input: %c", unit);
		break;
	}

	return 0;
}