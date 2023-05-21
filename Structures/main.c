#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct Human 
{
	char name[20];
	int age;
};

int main(void) {

	struct Human human1;
	strcpy(human1.name, "Vladimir");
	human1.age = 20;

	struct Human human2 = { "Ivan", 21 };

	printf("Name: %s, age: %d", human1.name, human1.age);
	printf("Name: %s, age: %d", human2.name, human2.age);


	return 0;
}