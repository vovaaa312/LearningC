#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdbool.h>



int main(void) {

	FILE* rF = fopen("kall.txt", "r");
	char buffer[255];
	if (rF == NULL) {
		perror("Cannot open file");
		return 1;
	}
	else {
		while (fgets(buffer, 255, rF) != NULL)
		{
			printf("%s", buffer);
		}
	}






	fclose(rF);

	return 0;
}