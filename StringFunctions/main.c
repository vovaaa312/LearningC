
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int main(void) {
	char str1[50] = "Hello";
	char str2[50] = "World";

	for (int i = 0; str1[i] != '\0'; i++)str1[i] = toupper(str1[i]);	
	for (int i = 0; str2[i] != '\0'; i++)str2[i] = toupper(str2[i]);
		
	printf("toupper: %s, %s\n", str1, str2);

	for (int i = 0; str1[i] != '\0'; i++)str1[i] = tolower(str1[i]);
	for (int i = 0; str2[i] != '\0'; i++)str2[i] = tolower(str2[i]);

	printf("tolower: %s, %s\n", str1, str2);

	char apstr1[50] = "My name is ";
	char apstr2[] = "Vladimir";

	strcat(apstr1, apstr2);

	printf("strcat: %s\n", apstr1);

	strcpy(str1, "12345");
	strcpy(str2, "67890");

	strncat(str1, str2, 2);

	printf("12345, 67890, strncat(str1, str2, 2): %s\n", str1);

	strcpy(str1, "12345");
	strcpy(str2, "67890");

	strncpy(str1, str2, 2);
	printf("12345, 67890, strncpy(str1, str2, 2): %s\n", str1);

	

	int compare = strcmp(str1, str2);

	printf("str1: %s, str2: %s, strcmp(str1, str2): %d\n", str1, str2, compare);

	compare = strncmp(str1, str2, 1);

	printf("str1: %s, str2: %s, strncmp(str1, str2, 1): %d\n", str1, str2, compare);

	int arr[] = {50,2,3,4,5};
	printf("%u", sizeof(arr)/sizeof(arr[0]));

	return 0;
}