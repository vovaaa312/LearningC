#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int main(void) {
	char strarr[][10] = { "string1", "string2", "string3" };
	int length = sizeof(strarr) / sizeof(strarr[0]);
	strcpy(strarr[2], "string 3");
	for (int i = 0; i < length; i++)printf("%s\n", strarr[i]);
	return 0;
}