#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
/*Напишете програма, която чете стринг от стандартния вход и го извежда
на стандартния изход с функциите fprintf и fscanf.*/
int main(void) {
	FILE* fp;
	char buff[256];
	fp = fopen("file.txt", "r");

	while (fscanf(stdin, "%s", buff) != EOF) {
		fprintf(stdout, "%s", buff);
	}
	fclose(fp);
}