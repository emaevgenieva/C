#include <stdio.h>
#include<string.h>
//указател към arr2d8_i: arr2d8_i_ptr
//Дефинирайте функции за принтиране на arr8_i и на arr2d8_i.
/*Използвайте typedef за да дефинирате алтернативни имена на следните типове:
● масив с 8 int елемента: arr8_i
● указател към arr8_i: arr8_i_ptr
● масив с 8 елемента от тип arr8_i: arr2d8_i
● указател към arr2d8_i: arr2d8_i_ptr*/

enum { size = 8 };
typedef int arr8_i[size];
typedef arr8_i* arr8_i_ptr;
typedef arr8_i arr2d8_i[size];
typedef arr2d8_i* arr2d8_i_ptr;
void print_arr8_i(arr8_i arr, int count);
void print_arr2d8_i_ptr(arr2d8_i arr_2d, int count);
int main(void) {

	arr8_i arr = { 1,2,8,4,5,6,15,8 };
	arr2d8_i arr_2d = {
		{ 10, 20, 30, 50, 80, 110, 120, 160 },
		{ 10, 20, 30, 50, 80, 110, 120, 160 },
		{ 10, 20, 65, 50, 80, 110, 120, 160 },
		{ 10, 20, 30, 50, 80, 110, 120, 160 },
		{ 10, 20, 30, 50, 89, 110, 120, 160 },
		{ 10, 20, 30, 50, 80, 125, 120, 160 },
		{ 10, 20, 30, 50, 80, 110, 120, 897 },
		{ 10, 20, 30, 50, 80, 110, 120, 897 },
	};
	
	print_arr8_i(arr, size);
	printf("\n");
	print_arr2d8_i_ptr(arr_2d, size);
}
void print_arr8_i(arr8_i arr, int count) {

	for (int i = 0; i < count; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}
void print_arr2d8_i_ptr(arr2d8_i arr_2d, int count) {
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			printf("%d ", arr_2d[i][j]);

		}
		printf("\n");
	}
}