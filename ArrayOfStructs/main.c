#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>



typedef struct
{
	char name[20];
	int age;
	float gpa;
}Student;

int main(void) {
	Student s1 = { "Vladimir", 20, 3.0 };
	Student s2 = { "Ivan", 21, 3.2 };
	Student s3 = { "Ilya", 20, 2.8 };

	Student students[] = {s1,s2,s3};
	int length = sizeof(students) / sizeof(students[0]);
	for (int i = 0; i < length; i++)
	{
		//printf("%-4s\t, %d, %.1f\n", students[i].name, students[i].age, students[i].gpa);
		printf("%-12s\t", students[i].name);
		printf("%-4d\t", students[i].age);
		printf("%.1f\n", students[i].gpa);

	}
	return 0;
}