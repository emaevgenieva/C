#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {

	int numbers = 0;
	int* ptr;
	int n = 0;
	
	printf("Enter numbers: ");
	scanf_s("%d", &numbers);

	ptr = (int*)malloc(numbers * sizeof(int));

	for (int i = 0; i < numbers; i++)
	{
		printf("Enter any number: ");
		scanf_s("%d", &n);
		ptr[i] = n;
		
	}
	for (int i = 0; i < numbers; i++)
	{
		printf("%d ", ptr[i]);
	}
	free(ptr);
}