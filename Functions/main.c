#include <stdio.h>
#include <math.h>

//function without arguments 
void greet() {
	printf("So, hello...\n");
}

//function with arguments 
void greet_n(char name[]) {
	printf("Hello, %s, how are you?\n", name);

}

void greet_prot(char[], int);


double square_n(double x) {
	return pow(x,2);
}

int main(void) 
{
	char name[] = "John";
	greet();
	greet_n(name);
	greet_prot("Jane", 22);
	printf("%f", square_n(5));

	return 0;
}

void greet_prot(char name[], int age) {
	printf("Hello, my name is %s, i am %d y.o.\n", name, age);
}

