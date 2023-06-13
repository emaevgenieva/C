#include <stdio.h>
#include <string.h>
#include <limits.h>

//Задача 12. Ако имаме символен низ char str[] = “Hеllo”, заменете
//буквите l с х на същия символен низ и отпечатайте резултата на
//конзолата.

int main() {
	char str[] = "Hello";
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'l') {
			str[i] = 'x';
		}
	}
	printf("The result is: %s", str);
}
