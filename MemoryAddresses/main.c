#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {

	char a = 'a';
	int b = 1;
	double c = 1;
	float d = 1;
	bool f = true;

	printf("char a:		%d bytes\n", sizeof(a));
	printf("int b:		%d bytes\n", sizeof(b));
	printf("double c:	%d bytes\n", sizeof(c));
	printf("float d:	%d bytes\n", sizeof(d));
	printf("bool f:		%d bytes\n\n", sizeof(f));
	
	printf("vlaue a:	%c \n", a);
	printf("vlaue b:	%d \n", b);
	printf("vlaue c:	%.1lf \n", c);
	printf("vlaue d:	%.1f \n", d);
	printf("vlaue f:	%b \n\n", f);

	printf("memory address a:	%p \n", &a);
	printf("memory address b:	%p \n", &b);
	printf("memory address c:	%p \n", &c);
	printf("memory address d:	%p \n", &d);
	printf("memory address f:	%p \n", &f);

	return 0;
}