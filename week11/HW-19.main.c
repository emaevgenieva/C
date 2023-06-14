#include<stdio.h>
#include<string.h>
#define SIZE 25
int main(void) {
	/*Задача 1
	Напишете програма, която чете стринг от стандартния вход и го извежда
	на стандартния изход с функциите fgets и fputs.*/

	char msg[SIZE] = { 0 };
	printf("Type up to 25 characters than press enter.\n");

	while (fgets( msg, SIZE, stdin) != NULL && msg[0] != '\n') {
		fputs(msg, stdout);
	}
	return 0;
}
