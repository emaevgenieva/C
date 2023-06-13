#include<stdio.h>
#include<math.h>


int main(void) {

	int arr[5] = { 3,2,6,1,5 };
	int minNum = 0;
	int i = 0;
	int temp = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[j] < arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		
	}

	for (int i = 0; i < len; i++)
	{
		printf("%d\t", arr[i]);
	}
	
}