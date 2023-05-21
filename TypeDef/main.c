#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


typedef char user[25];  //typedef character

typedef struct
{
	char name[20];
	int age;
}Human;

int main(void) {

	user user1 = "Vladimir";

	Human h1 = { user1, 20 };

	return 0;
}