#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
/*Задача 2
Напишете програма, която чете стринг от стандартния вход и го извежда
на стандартния изход с функциите getc и putc.
Moже да ползвате fgetc и fputc, които са почти същите.
Потърсете информация за разликата между различните версии - при
едната двойка не можем да имаме аргументи със странични ефекти. При
кои?*/

int main(void) {
	
	int ch = getc(stdin);

	while (ch != EOF) {
		putc(ch, stdin);
		ch = getc(stdin);
	}

	fclose(stdin);
}