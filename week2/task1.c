#include <stdio.h>
#include <limits.h>
#include <string.h>

//Задача 11. Ако имаме символен низ от символа char str[] = “Hello”;
//копирайте всеки един от неговите символи в низ, който да изглежда
//огледален на него. Ето така char rts[] = “ollеH”; и принтирайте
//резултата

void reverse(char* str1) {
	int size = strlen(str1);
	int temp;
	for (int i = 0; i < size/2; i++) {
		temp = str1[i];
		str1[i] = str1[size - i - 1];
		str1[size - i - 1] = temp;
	}
}

int main() {
	char str1[] = "Hello";
	reverse(str1);
	printf("The result is: %s", str1);
}
