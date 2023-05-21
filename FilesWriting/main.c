#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
	char name[20];
	int age;
}Human;

int main(void) {

	FILE* wF = fopen("file.txt", "w"); //"w" - owerwrite file
									   //"a" - append to file

	Human h1 = { "Vladimir", 20 };
	Human h2 = { "Ivan", 22 };

	fprintf(wF, "%s %d\n", h1.name, h1.age);
	fprintf(wF, "%s %d\n", h2.name, h2.age);

	fclose(wF);


	//how to remove file:
	/*if (!remove("file.txt")==0) {
	perror("File was nor deleted");
	}*/

	return 0;
}