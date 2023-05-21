#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void sort_int(int arr[], int size) 
{
	
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size-1; j++)
		{
			if (arr[j]>arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			
		}
	}
}

void sort_chars(char arr[],int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				char temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
	}
}


int main(void) {
	
	int int_arr[] = {1,3,2,5,4,8,7};
	int int_arr_size = sizeof(int_arr) / sizeof(int_arr[0]);
	sort_int(int_arr, int_arr_size);
	for (int i = 0; i < int_arr_size; i++)printf("%d\n", int_arr[i]);

	char sym_arr[] = {'A','C','B','F','D','E'};
	int char_arr_size = sizeof(sym_arr) / sizeof(sym_arr[0]);
	sort_chars(sym_arr, char_arr_size);
	for (int i = 0; i < char_arr_size; i++)printf("%c\n", sym_arr[i]);
	printf("%c", sym_arr[5]);

	return 0;
}