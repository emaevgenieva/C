#include <stdio.h>
#include<string.h>

int main(void) {
	int arr2D[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int arr[3] = { 10, 20, 30 };
	int(*arrPtr)[3] = &arr;
	arrPtr = arr2D;
	


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int* iPtr = arr2D[i];
			if (j == 0) {
				
				printf("%d ", *iPtr);
			}

		}
	}


}
void s_print_arr2D(const int* arr, int rows, int cols) {


}
